
#include "GUI.h"


Object_List ObjList;


// отрисовка рамки
void	GUI_drawFrame(uint16_t	X0,	uint16_t	X1,			// X-координаты
										uint16_t	Y0,	uint16_t	Y1,			// Y-координаты
										uint16_t	border,								// ширина рамки
										uint16_t	borderColor)					// цвет рамки
{
	// отрисовка рамки
	LCD_drawFilledRectangle(X0, X0+(border-1), Y0, Y1, borderColor);
	LCD_drawFilledRectangle(X0, X1, Y1-(border-1), Y1, borderColor);
	LCD_drawFilledRectangle(X1-(border-1), X1, Y0, Y1, borderColor);
	LCD_drawFilledRectangle(X0, X1, Y0, Y0+(border-1), borderColor);
}

// отрисовка заполненной рамки
void	GUI_drawFilledFrame(uint16_t	X0,	uint16_t	X1,			// X-координаты
													uint16_t	Y0,	uint16_t	Y1,			// Y-координаты
													uint16_t	border,								// ширина рамки
													uint16_t	mainColor,						// основной цвет
													uint16_t	borderColor)					// цвет рамки
{
	LCD_drawFilledRectangle(X0, X1, Y0, Y1, mainColor);
	// отрисовка рамки
	if(border > 0)
	{
		LCD_drawFilledRectangle(X0, X0+(border-1), Y0, Y1, borderColor);
		LCD_drawFilledRectangle(X0, X1, Y1-(border-1), Y1, borderColor);
		LCD_drawFilledRectangle(X1-(border-1), X1, Y0, Y1, borderColor);
		LCD_drawFilledRectangle(X0, X1, Y0, Y0+(border-1), borderColor);
	}
}

// 
void	GUI_intToStr(int32_t num, char *strBuf)
{
	uint8_t	charCounter	=	0;
	char		bufChar				=	0;
	
	if(num == 0)
	{
		*strBuf = '0';
		strBuf++;
		*strBuf = '\0';
		return;
	}
	
	if(num < 0)
	{
		*strBuf = '-';
		strBuf++;
	}
	
	while(num)
	{
		*strBuf = '0' + num % 10;
		if(num / 10)
		{
			strBuf++;
			charCounter++;
		}
		num = num / 10;
	}
	
	strBuf = strBuf - charCounter;
	
	for(uint8_t i = 0; i < charCounter/2+1; i++)
	{
		bufChar			=	*(strBuf+i);
		*(strBuf+i)	=	*(strBuf+charCounter-i);
		*(strBuf+charCounter-i) = bufChar;
	}
	
	*(strBuf+charCounter+1) = '\0';
}

// 
void	GUI_floatToStr(float num, char *strBuf)
{
	int32_t	numInt				=	(int32_t)(num*10);
	uint8_t	charCounter		=	0;
	char		bufChar				=	0;
	
	
	if(num < 0)
	{
		*strBuf = '-';
		strBuf++;
	}
	
	if(numInt < 10  && numInt >= 0)
	{
		*strBuf = '0';
		strBuf++;
		*strBuf = '.';
		strBuf++;
		*strBuf = '0' + numInt % 10;
		strBuf++;
		*strBuf = '\0';
		return;
	}
	
	while(numInt)
	{
		if(charCounter == 1)
		{
			*strBuf = '.';
			strBuf++;
			charCounter++;
		}
		*strBuf = '0' + numInt % 10;
		if(numInt / 10)
		{
			strBuf++;
			charCounter++;
		}
		numInt = numInt / 10;
	}
	
	strBuf = strBuf - charCounter;
	
	for(uint8_t i = 0; i < charCounter/2+1; i++)
	{
		bufChar			=	*(strBuf+i);
		*(strBuf+i)	=	*(strBuf+charCounter-i);
		*(strBuf+charCounter-i) = bufChar;
	}
	
	*(strBuf+charCounter+1) = '\0';
}


// очистка списка объектов
void	GUI_objectListReset(void)
{
	ObjList.ObjLabelNum 		= 0;
	ObjList.ObjButtonNum 		= 0;
	ObjList.ObjCanvasNum		= 0;
}

// обработчик нажатия на дисплей
void	GUI_Handler(void)
{
	uint8_t Flag_objectIsDefined = 0;
	
	#if OBJ_BUTTON_AMOUNT > 0
		for(uint8_t objButNum = 0; objButNum < OBJ_BUTTON_AMOUNT; objButNum++)
		{
			if((FT6236_Tpoint.Xt < ObjList.ObjButtonList[objButNum].X0) || (FT6236_Tpoint.Xt > ObjList.ObjButtonList[objButNum].X1))
				continue;
			else if((FT6236_Tpoint.Yt < ObjList.ObjButtonList[objButNum].Y0) || (FT6236_Tpoint.Yt > ObjList.ObjButtonList[objButNum].Y1))
				continue;
			else
			{
				if(ObjList.ObjButtonList[objButNum].Flag_buttonClicked == 0)
				{
					ObjList.ObjButtonList[objButNum].action();
					
					if(ObjList.ObjButtonList[objButNum].msDelay != 0)
					{
						ObjList.ObjButtonList[objButNum].Flag_buttonClicked = 1;
						ObjList.ObjButtonList[objButNum].timerVal = ObjList.ObjButtonList[objButNum].msDelay;
					}
				}
				Flag_objectIsDefined = 1;
				break;
			}
		}
		
		if(Flag_objectIsDefined == 1)
			return;	
	#endif
	
	#if OBJ_CANVAS_AMOUNT > 0
		for(uint8_t objCanvasNum = 0; objCanvasNum < OBJ_CANVAS_AMOUNT; objCanvasNum++)
		{
			if((FT6236_Tpoint.Xt < ObjList.ObjCanvasList[objCanvasNum].X0) || (FT6236_Tpoint.Xt > ObjList.ObjCanvasList[objCanvasNum].X1))
				continue;
			else if((FT6236_Tpoint.Yt < ObjList.ObjCanvasList[objCanvasNum].Y0) || (FT6236_Tpoint.Yt > ObjList.ObjCanvasList[objCanvasNum].Y1))
				continue;
			else
			{
				GUI_drawPoint(ObjList.ObjCanvasList[objCanvasNum].penWeight, ObjList.ObjCanvasList[objCanvasNum].penColor);
				
				if(ObjList.ObjCanvasList[objCanvasNum].action != 0)
					ObjList.ObjCanvasList[objCanvasNum].action();
				Flag_objectIsDefined = 1;
				break;
			}
		}
	#endif
}


// создать лейбл
void	GUI_createLabel(uint16_t	X0,	uint16_t	X1,			// X-координаты	// создать лейбл
											uint16_t	Y0,	uint16_t	Y1,			// Y-координаты
											uint16_t	border,								// ширина границ
											uint16_t	mainColor,						// основной цвет
											uint16_t	borderColor,					// цвет границ
											char			*str,									// текст
											uint16_t	textColor,						// цвет текста
											uint16_t	textMarginX,					// отступ текста по X
											uint16_t	textMarginY,					// отступ текста по Y
											void			(*action)(void))			// функция привязаная к лейблу
{
	ObjList.ObjLabelList[ObjList.ObjLabelNum].X0	=	X0;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].X1	=	X1;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].Y0	=	Y0;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].Y1	=	Y1;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].border				=	border;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].mainColor			=	mainColor;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].borderColor		=	borderColor;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].str						=	str;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].textColor			=	textColor;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].textMarginX		=	textMarginX;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].textMarginY		=	textMarginY;
	ObjList.ObjLabelList[ObjList.ObjLabelNum].action				=	action;
	
	GUI_drawFilledFrame(X0, X1, Y0, Y1, border, mainColor, borderColor);		// отрисовка лейбла
	
	if(str != 0)
		ObjList.ObjLabelList[ObjList.ObjLabelNum].textLenght = LCD_printString(X0+textMarginX, Y0+textMarginY, str, textColor);
	else
		ObjList.ObjLabelList[ObjList.ObjLabelNum].textLenght = 0;
	
	ObjList.ObjLabelNum++;	// инкрементирование индекса для следующего объекта
}

// сменить текст лейбла
void	GUI_labelChangeText(uint8_t labelNum, char *str, uint16_t	textColor)
{
	GUI_drawFilledFrame(ObjList.ObjLabelList[labelNum].X0+ObjList.ObjLabelList[labelNum].textMarginX,
											ObjList.ObjLabelList[labelNum].textLenght,
											ObjList.ObjLabelList[labelNum].Y0+ObjList.ObjLabelList[labelNum].textMarginY,
											ObjList.ObjLabelList[labelNum].Y0+24,
											0,
											ObjList.ObjLabelList[labelNum].mainColor,
											0);																						// закркасить старый цвет
	
	if(str != 0)
		ObjList.ObjLabelList[labelNum].textLenght = LCD_printString(ObjList.ObjLabelList[labelNum].X0+ObjList.ObjLabelList[labelNum].textMarginX,
																																ObjList.ObjLabelList[labelNum].Y0+ObjList.ObjLabelList[labelNum].textMarginY,
																																str, textColor);
}

// сменить цвет лейбла
void	GUI_labelChangeMainColor(uint8_t labelNum, uint16_t	mainColor)
{
	ObjList.ObjLabelList[labelNum].mainColor = mainColor;
	
	GUI_drawFilledFrame(ObjList.ObjLabelList[labelNum].X0,
											ObjList.ObjLabelList[labelNum].X1,
											ObjList.ObjLabelList[labelNum].Y0,
											ObjList.ObjLabelList[labelNum].Y1,
											ObjList.ObjLabelList[labelNum].border,
											ObjList.ObjLabelList[labelNum].mainColor,
											ObjList.ObjLabelList[labelNum].borderColor);					// закркасить старый цвет
}


// создать кнопку
void	GUI_createButton(uint16_t	X0,	uint16_t	X1,			// X-координаты кнопки
											uint16_t	Y0,	uint16_t	Y1,			// Y-координаты кнопки
											uint16_t	border,								// ширина границ
											uint16_t	mainColor,						// основной цвет кнопки
											uint16_t	borderColor,					// цвет границ
											char			*str,									// текст
											uint16_t	textColor,						// цвет текста
											uint16_t	textMarginX,					// отступ текста по X
											uint16_t	textMarginY,					// отступ текста по Y											
											uint8_t		state,
											uint16_t	msDelay,							// задержка до следующего нажатия
											void			(*action)(void))			// функция привязаная к кнопке
{
	ObjList.ObjButtonList[ObjList.ObjButtonNum].X0	=	X0;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].X1	=	X1;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].Y0	=	Y0;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].Y1	=	Y1;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].border							=	border;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].mainColor						=	mainColor;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].borderColor					=	borderColor;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].str									=	str;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].textColor						=	textColor;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].textMarginX					=	textMarginX;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].textMarginY					=	textMarginY;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].state								=	state;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].msDelay							=	msDelay;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].Flag_buttonClicked	= 0;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].timerVal 						= 0;
	ObjList.ObjButtonList[ObjList.ObjButtonNum].action							=	action;
	
	GUI_drawFilledFrame(X0, X1, Y0, Y1, border, mainColor, borderColor);		// отрисовка кнопки
	
	if(str != 0)
		ObjList.ObjButtonList[ObjList.ObjButtonNum].textLenght = LCD_printString(X0+textMarginX, Y0+textMarginY, str, textColor);
	else
		ObjList.ObjButtonList[ObjList.ObjButtonNum].textLenght = 0;
	
	ObjList.ObjButtonNum++;	// инкрементирование индекса для следующего объекта
}

// сменить текст кнопки
void	GUI_buttonChangeText(uint8_t buttonNum, char *str, uint16_t	textColor)
{
	GUI_drawFilledFrame(ObjList.ObjButtonList[buttonNum].X0+ObjList.ObjButtonList[buttonNum].textMarginX,
											ObjList.ObjButtonList[buttonNum].textLenght,
											ObjList.ObjButtonList[buttonNum].Y0+ObjList.ObjButtonList[buttonNum].textMarginY,
											ObjList.ObjButtonList[buttonNum].Y0+24,
											0,
											ObjList.ObjButtonList[buttonNum].mainColor,
											0);																						// закркасить старый цвет
	
	if(str != 0)
		ObjList.ObjButtonList[buttonNum].textLenght = LCD_printString(ObjList.ObjButtonList[buttonNum].X0+ObjList.ObjButtonList[buttonNum].textMarginX,
																																ObjList.ObjButtonList[buttonNum].Y0+ObjList.ObjButtonList[buttonNum].textMarginY,
																																str, textColor);
}

// сменить цвет кнопки
void	GUI_buttonChangeMainColor(uint8_t buttonNum, uint16_t	mainColor)
{
	ObjList.ObjButtonList[buttonNum].mainColor = mainColor;
	
	GUI_drawFilledFrame(ObjList.ObjButtonList[buttonNum].X0,
											ObjList.ObjButtonList[buttonNum].X1,
											ObjList.ObjButtonList[buttonNum].Y0,
											ObjList.ObjButtonList[buttonNum].Y1,
											ObjList.ObjButtonList[buttonNum].border,
											ObjList.ObjButtonList[buttonNum].mainColor,
											ObjList.ObjButtonList[buttonNum].borderColor);					// закркасить старый цвет
}


// создать холст
void	GUI_createCanvas(uint16_t		X0,	uint16_t	X1,			// X-координаты кнопки
											uint16_t		Y0,	uint16_t	Y1,			// Y-координаты кнопки
											uint16_t		border,								// ширина границ
											uint16_t		mainColor,						// основной цвет холста
											uint16_t		borderColor,					// цвет границ
											Pen_Weight	penWeight,						// толщина пера
											uint16_t		penColor,							// цвет пера
											void				(*action)(void))			// функция привязаная к холсту
{
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].X0	=	X0;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].X1	=	X1;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].Y0	=	Y0;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].Y1	=	Y1;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].border			=	border;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].mainColor		=	mainColor;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].borderColor	=	borderColor;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].penWeight		=	penWeight;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].penColor		=	penColor;
	ObjList.ObjCanvasList[ObjList.ObjCanvasNum].action			=	action;
	
	GUI_drawFilledFrame(X0, X1, Y0, Y1, border, mainColor, borderColor);		// отрисовка холста
	
	ObjList.ObjCanvasNum++;
}

// очистить холст
void	GUI_canvasClear(uint8_t canvasNum)
{
	LCD_drawFilledRectangle(ObjList.ObjCanvasList[canvasNum].X0+ObjList.ObjCanvasList[canvasNum].border,
													ObjList.ObjCanvasList[canvasNum].X1-ObjList.ObjCanvasList[canvasNum].border,
													ObjList.ObjCanvasList[canvasNum].Y0+ObjList.ObjCanvasList[canvasNum].border,
													ObjList.ObjCanvasList[canvasNum].Y1-ObjList.ObjCanvasList[canvasNum].border,
													0xFFFF);
}

// сменить цвет пера холста
void	GUI_canvasChangePenColor(uint8_t canvasNum, uint16_t newPenColor)
{
	ObjList.ObjCanvasList[canvasNum].penColor	=	newPenColor;
}

// 
void	GUI_canvasSetPenEraser(uint8_t canvasNum)
{
	ObjList.ObjCanvasList[canvasNum].penColor	=	0xFFFF;
}

// поставить точку на холсте
void	GUI_drawPoint(Pen_Weight penWeight, uint16_t pointColor)
{
	// отрисовка точки
	switch(penWeight)
	{
		case Pen_fine:
			LCD_drawPixel(FT6236_Tpoint.Xt, FT6236_Tpoint.Yt, pointColor);
			break;
		case Pen_small:
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-1, FT6236_Tpoint.Xt+1, FT6236_Tpoint.Yt-1, FT6236_Tpoint.Yt+1, pointColor);
			break;
		case Pen_medium:
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-2, FT6236_Tpoint.Xt-2, FT6236_Tpoint.Yt-1, FT6236_Tpoint.Yt+1, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-1, FT6236_Tpoint.Xt+1, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt+2, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+2, FT6236_Tpoint.Xt+1, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt-2, pointColor);
			break;
		case Pen_broad:
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-3, FT6236_Tpoint.Xt-3, FT6236_Tpoint.Yt-1, FT6236_Tpoint.Yt+1, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-2, FT6236_Tpoint.Xt-2, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt+2, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-1, FT6236_Tpoint.Xt+1, FT6236_Tpoint.Yt-3, FT6236_Tpoint.Yt+3, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+2, FT6236_Tpoint.Xt+2, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt+2, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+3, FT6236_Tpoint.Xt+3, FT6236_Tpoint.Yt-1, FT6236_Tpoint.Yt+1, pointColor);
			break;
		case Pen_extraBroad:
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-6, FT6236_Tpoint.Xt-6, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt+2, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-5, FT6236_Tpoint.Xt-5, FT6236_Tpoint.Yt-4, FT6236_Tpoint.Yt+4, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-4, FT6236_Tpoint.Xt-3, FT6236_Tpoint.Yt-5, FT6236_Tpoint.Yt+5, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt-2, FT6236_Tpoint.Xt+2, FT6236_Tpoint.Yt-6, FT6236_Tpoint.Yt+6, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+3, FT6236_Tpoint.Xt+4, FT6236_Tpoint.Yt-5, FT6236_Tpoint.Yt+5, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+5, FT6236_Tpoint.Xt+5, FT6236_Tpoint.Yt-4, FT6236_Tpoint.Yt+4, pointColor);
			LCD_drawFilledRectangle(FT6236_Tpoint.Xt+6, FT6236_Tpoint.Xt+6, FT6236_Tpoint.Yt-2, FT6236_Tpoint.Yt+2, pointColor);
			break;
	}		
}
