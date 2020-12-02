
#include "Timer.h"


volatile uint32_t Delay_dec = 0;

volatile uint8_t extFlag = 0;

void Timer3_Init(void)
{
	// настройка Т2 на генерирование прерывания каждую мкс
	MDR_RST_CLK->TIM_CLOCK	|=	((1 << 16)			// делитель 2: F_Timer3 = 80 / 2 = 40 MHz
															|(1 << 26));		// вкл. тактирование Таймера 3
		
	// режим счета – вверх,начальное значение – число из регистра CNT
	MDR_TIMER3->CNTRL	=	0x00000000;
	MDR_TIMER3->PSG		=	39;				// предделитель частоты
	MDR_TIMER3->ARR		=	1;				// основание счета
	MDR_TIMER3->CNT		=	0;				// начальное значение счетчика
	MDR_TIMER3->IE		=	2;				// разрешение генерир. прерывание при CNT=ARR
	
	NVIC_EnableIRQ(Timer3_IRQn);
	__enable_irq();
}


void Timer3_IRQHandler(void)
{
	if(Delay_dec > 0)
		Delay_dec--;
	
	MDR_TIMER3->CNT	=	0;									// сброс счетчика таймера
	MDR_TIMER3->STATUS	=	0;							// сброс статуса прерывания
	NVIC_ClearPendingIRQ(Timer3_IRQn);		// сброс статуса прерывания
}


void delay_us(uint32_t Delay_us_Data)
{
	MDR_TIMER3->CNTRL	=	1;
	
	Delay_dec = Delay_us_Data;
	while (Delay_dec) {};
	
	MDR_TIMER3->CNTRL	=	0;
}

void delay_ms(uint32_t Delay_ms_Data)
{
	MDR_TIMER3->CNTRL	=	1;
	
	Delay_dec = Delay_ms_Data * 1000;
	while (Delay_dec) {};
		
	MDR_TIMER3->CNTRL	=	0;
}


void Timer1_init(void)
{
	// настройка Т2 на генерирование прерывания каждую мкс
	MDR_RST_CLK->TIM_CLOCK	|=	((1 << 0)			// делитель 2: F_Timer1 = 80 / 2 = 40 MHz
															|(1 << 24));	// вкл. тактирование Таймера 1
		
	// режим счета – вверх,начальное значение – число из регистра CNT
	MDR_TIMER1->CNTRL	=	1;
	MDR_TIMER1->PSG		=	39999;				// предделитель частоты
	MDR_TIMER1->ARR		=	1;						// основание счета
	MDR_TIMER1->CNT		=	0;						// начальное значение счетчика
	MDR_TIMER1->IE		=	2;						// разрешение генерир. прерывание при CNT=ARR
	
	NVIC_EnableIRQ(Timer1_IRQn);
	__enable_irq();
}


void Timer1_IRQHandler(void)
{
	for(uint8_t objButNum = 0; objButNum < OBJ_BUTTON_AMOUNT; objButNum++)
	{
		if(GUI.objList.ObjButtonList[objButNum].timerVal > 0)
		{
			GUI.objList.ObjButtonList[objButNum].timerVal--;
		}
		else
		{
			GUI.objList.ObjButtonList[objButNum].flag_buttonWasClicked = 0;
		}
	}
	
	MDR_TIMER1->CNT	=	0;									// сброс счетчика таймера
	MDR_TIMER1->STATUS	=	0;							// сброс статуса прерывания
	NVIC_ClearPendingIRQ(Timer1_IRQn);		// сброс статуса прерывания
}


void Timer2_Init(void)
{
	// настройка Т2 на генерирование прерывания каждую мкс
	MDR_RST_CLK->TIM_CLOCK	|=	((0 << 8)				// делитель 1: F_Timer2 = 80 / 1 = 80 MHz
															|(1 << 25));		// вкл. тактирование Таймера 2
		
	// режим счета – вверх,начальное значение – число из регистра CNT
	MDR_TIMER2->CNTRL	=	0x00000000;
	MDR_TIMER2->PSG		=	0;				// предделитель частоты
	MDR_TIMER2->ARR		=	1;				// основание счета
	MDR_TIMER2->CNT		=	0;				// начальное значение счетчика
	MDR_TIMER2->IE		=	2;				// разрешение генерир. прерывание при CNT=ARR
	
	NVIC_EnableIRQ(Timer2_IRQn);
	NVIC_EnableIRQ(EXT_INT3_IRQn);
	__enable_irq();
}


void EXT_INT3_IRQHandler(void)
{
	extFlag = 1;
}


void Timer2_IRQHandler(void)
{
	extFlag = 1;
	
	MDR_TIMER2->CNT	=	0;									// сброс счетчика таймера
	MDR_TIMER2->STATUS	=	0;							// сброс статуса прерывания
	NVIC_ClearPendingIRQ(Timer2_IRQn);		// сброс статуса прерывания
}
