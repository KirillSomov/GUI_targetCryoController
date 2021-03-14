
#ifndef GUI_CRYO_TARGET_CONTROLLER_H
	#define GUI_CRYO_TARGET_CONTROLLER_H

	// подключение заголовочных файлов модулей проекта
	#include "link.h"
	
	
	#define	LOGO_TEXT_HEADER_0_X0											96-1
	#define	LOGO_TEXT_HEADER_0_Y0											295-1
	#define	LOGO_TEXT_HEADER_0_TEXT										"ККВМ-10"
	#define	LOGO_TEXT_HEADER_0_TEXT_COLOR							0x0000
	#define	LOGO_TEXT_HEADER_0_TEXT_FONT							&calibri_14ptFontInfo
	
	#define	LOGO_TEXT_HEADER_1_X0											8-1
	#define	LOGO_TEXT_HEADER_1_Y0											279-1
	#define	LOGO_TEXT_HEADER_1_TEXT										"Криогенный термоконтроллер"
	#define	LOGO_TEXT_HEADER_1_TEXT_COLOR							0x0000
	#define	LOGO_TEXT_HEADER_1_TEXT_FONT							&calibri_14ptFontInfo
	
	#define	LOGO_TEXT_HEADER_2_X0											40-1
	#define	LOGO_TEXT_HEADER_2_Y0											262-1
	#define	LOGO_TEXT_HEADER_2_TEXT										"водородной мишени"
	#define	LOGO_TEXT_HEADER_2_TEXT_COLOR							0x0000
	#define	LOGO_TEXT_HEADER_2_TEXT_FONT							&calibri_14ptFontInfo
	
	#define	LOGO_PICTURE_JINR_X0											20-1
	#define	LOGO_PICTURE_JINR_Y0											100
	#define	LOGO_PICTURE_JINR_COLOR										0x2339
	#define	LOGO_PICTURE_JINR_PIC_ARR									&logoJINRInfo
	
	#define	LOGO_TEXT_JINR_SIGN_0_X0									65-1
	#define	LOGO_TEXT_JINR_SIGN_0_Y0									80-1
	#define	LOGO_TEXT_JINR_SIGN_0_TEXT								"JOINT INSTITUTE"
	#define	LOGO_TEXT_JINR_SIGN_0_TEXT_COLOR					0x2339
	#define	LOGO_TEXT_JINR_SIGN_0_TEXT_FONT						&calibri_14ptFontInfo
	
	#define	LOGO_TEXT_JINR_SIGN_1_X0									25-1
	#define	LOGO_TEXT_JINR_SIGN_1_Y0									60-1
	#define	LOGO_TEXT_JINR_SIGN_1_TEXT								"FOR NUCLEAR RESEARCH"
	#define	LOGO_TEXT_JINR_SIGN_1_TEXT_COLOR					0x2339
	#define	LOGO_TEXT_JINR_SIGN_1_TEXT_FONT						&calibri_14ptFontInfo
	
	#define	LOGO_PICTURE_DIALTEK_BLACK_X0							97-1
	#define	LOGO_PICTURE_DIALTEK_BLACK_Y0							5-1
	#define	LOGO_PICTURE_DIALTEK_BLACK_COLOR					0x0000
	#define	LOGO_PICTURE_DIALTEK_BLACK_PIC_ARR				&logoDialtekBlackInfo
	
	#define	LOGO_PICTURE_DIALTEK_GREEN_X0							93-1
	#define	LOGO_PICTURE_DIALTEK_GREEN_Y0							13-1
	#define	LOGO_PICTURE_DIALTEK_GREEN_COLOR					0x25B0
	#define	LOGO_PICTURE_DIALTEK_GREEN_PIC_ARR				&logoDialtekGreenInfo
	
	#define	LOGO_TEXT_VER_X0													200-1
	#define	LOGO_TEXT_VER_Y0													5-1
	#define	LOGO_TEXT_VER_TEXT												"v1.0"
	#define	LOGO_TEXT_VER_TEXT_COLOR									0x0000
	#define	LOGO_TEXT_VER_TEXT_FONT										&calibri_14ptFontInfo
	
	
	#define	NUM_STR_LEN															6
	
	#define	LABEL_HEADER_ID													0
	#define	LABEL_ID0_HEADER_X0											0
	#define	LABEL_ID0_HEADER_X1											LCD_WIDTH-1
	#define	LABEL_ID0_HEADER_Y0											287-1
	#define	LABEL_ID0_HEADER_Y1											LCD_HEIGHT-1
	#define	LABEL_ID0_HEADER_BORDER									2
	#define	LABEL_ID0_HEADER_MAIN_COLOR							0x0000
	#define	LABEL_ID0_HEADER_BORDER_COLOR						0x0000
	#define	LABEL_ID0_HEADER_TEXT										"КриоКонтроллер Н"
	#define	LABEL_ID0_HEADER_TEXT_COLOR							0xFFFF
	#define	LABEL_ID0_HEADER_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID0_HEADER_TEXT_MARGIN_X					25
	#define	LABEL_ID0_HEADER_TEXT_MARGIN_Y					3
	#define	LABEL_ID0_HEADER_ACTION_PTR							0
	
	#define	LABEL_ID1_HEADER_SENS_X0								0
	#define	LABEL_ID1_HEADER_SENS_X1								100-1
	#define	LABEL_ID1_HEADER_SENS_Y0								259-1
	#define	LABEL_ID1_HEADER_SENS_Y1								286-1
	#define	LABEL_ID1_HEADER_SENS_BORDER						0
	#define	LABEL_ID1_HEADER_SENS_MAIN_COLOR				0xFFFF
	#define	LABEL_ID1_HEADER_SENS_BORDER_COLOR			0x0000
	#define	LABEL_ID1_HEADER_SENS_TEXT							"Датчики"
	#define	LABEL_ID1_HEADER_SENS_TEXT_COLOR				0x0000
	#define	LABEL_ID1_HEADER_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID1_HEADER_SENS_TEXT_MARGIN_X			6
	#define	LABEL_ID1_HEADER_SENS_TEXT_MARGIN_Y			0
	#define	LABEL_ID1_HEADER_SENS_ACTION_PTR				0
	
	#define	LABEL_ID2_SENS_1_X0											0
	#define	LABEL_ID2_SENS_1_X1											80-1
	#define	LABEL_ID2_SENS_1_Y0											231-1
	#define	LABEL_ID2_SENS_1_Y1											258-1
	#define	LABEL_ID2_SENS_1_BORDER									0
	#define	LABEL_ID2_SENS_1_MAIN_COLOR							0xFDAE
	#define	LABEL_ID2_SENS_1_BORDER_COLOR						0x0000
	#define	LABEL_ID2_SENS_1_TEXT										"Т1"
	#define	LABEL_ID2_SENS_1_TEXT_COLOR							0x0000
	#define	LABEL_ID2_SENS_1_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID2_SENS_1_TEXT_MARGIN_X					5
	#define	LABEL_ID2_SENS_1_TEXT_MARGIN_Y					0
	#define	LABEL_ID2_SENS_1_ACTION_PTR							0
	
	#define	LABEL_ID3_SENS_2_X0											0
	#define	LABEL_ID3_SENS_2_X1											80-1
	#define	LABEL_ID3_SENS_2_Y0											203-1
	#define	LABEL_ID3_SENS_2_Y1											230-1
	#define	LABEL_ID3_SENS_2_BORDER									0
	#define	LABEL_ID3_SENS_2_MAIN_COLOR							0xFFFF
	#define	LABEL_ID3_SENS_2_BORDER_COLOR						0x0000
	#define	LABEL_ID3_SENS_2_TEXT										"Т2"
	#define	LABEL_ID3_SENS_2_TEXT_COLOR							0x0000
	#define	LABEL_ID3_SENS_2_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID3_SENS_2_TEXT_MARGIN_X					5
	#define	LABEL_ID3_SENS_2_TEXT_MARGIN_Y					0
	#define	LABEL_ID3_SENS_2_ACTION_PTR							0
	
	#define	LABEL_ID4_SENS_3_X0											0
	#define	LABEL_ID4_SENS_3_X1											80-1
	#define	LABEL_ID4_SENS_3_Y0											175-1
	#define	LABEL_ID4_SENS_3_Y1											202-1
	#define	LABEL_ID4_SENS_3_BORDER									0
	#define	LABEL_ID4_SENS_3_MAIN_COLOR							0xFDAE
	#define	LABEL_ID4_SENS_3_BORDER_COLOR						0x0000
	#define	LABEL_ID4_SENS_3_TEXT										"Т3"
	#define	LABEL_ID4_SENS_3_TEXT_COLOR							0x0000
	#define	LABEL_ID4_SENS_3_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID4_SENS_3_TEXT_MARGIN_X					5
	#define	LABEL_ID4_SENS_3_TEXT_MARGIN_Y					0
	#define	LABEL_ID4_SENS_3_ACTION_PTR							0

	#define	LABEL_ID5_SENS_4_X0											0
	#define	LABEL_ID5_SENS_4_X1											80-1
	#define	LABEL_ID5_SENS_4_Y0											147-1
	#define	LABEL_ID5_SENS_4_Y1											174-1
	#define	LABEL_ID5_SENS_4_BORDER									0
	#define	LABEL_ID5_SENS_4_MAIN_COLOR							0xFFFF
	#define	LABEL_ID5_SENS_4_BORDER_COLOR						0x0000
	#define	LABEL_ID5_SENS_4_TEXT										"Т4"
	#define	LABEL_ID5_SENS_4_TEXT_COLOR							0x0000
	#define	LABEL_ID5_SENS_4_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID5_SENS_4_TEXT_MARGIN_X					5
	#define	LABEL_ID5_SENS_4_TEXT_MARGIN_Y					0
	#define	LABEL_ID5_SENS_4_ACTION_PTR							0
	
	#define	LABEL_ID6_SENS_5_X0											0
	#define	LABEL_ID6_SENS_5_X1											80-1
	#define	LABEL_ID6_SENS_5_Y0											119-1
	#define	LABEL_ID6_SENS_5_Y1											146-1
	#define	LABEL_ID6_SENS_5_BORDER									0
	#define	LABEL_ID6_SENS_5_MAIN_COLOR							0xFDAE
	#define	LABEL_ID6_SENS_5_BORDER_COLOR						0x0000
	#define	LABEL_ID6_SENS_5_TEXT										"Т5"
	#define	LABEL_ID6_SENS_5_TEXT_COLOR							0x0000
	#define	LABEL_ID6_SENS_5_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID6_SENS_5_TEXT_MARGIN_X					5
	#define	LABEL_ID6_SENS_5_TEXT_MARGIN_Y					0
	#define	LABEL_ID6_SENS_5_ACTION_PTR							0
	
	#define	LABEL_ID7_SENS_6_X0											0
	#define	LABEL_ID7_SENS_6_X1											80-1
	#define	LABEL_ID7_SENS_6_Y0											91-1
	#define	LABEL_ID7_SENS_6_Y1											118-1
	#define	LABEL_ID7_SENS_6_BORDER									0
	#define	LABEL_ID7_SENS_6_MAIN_COLOR							0xFFFF
	#define	LABEL_ID7_SENS_6_BORDER_COLOR						0x0000
	#define	LABEL_ID7_SENS_6_TEXT										"Т6"
	#define	LABEL_ID7_SENS_6_TEXT_COLOR							0x0000
	#define	LABEL_ID7_SENS_6_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID7_SENS_6_TEXT_MARGIN_X					5
	#define	LABEL_ID7_SENS_6_TEXT_MARGIN_Y					0
	#define	LABEL_ID7_SENS_6_ACTION_PTR							0
	
	#define	LABEL_ID8_SENS_7_X0											0
	#define	LABEL_ID8_SENS_7_X1											80-1
	#define	LABEL_ID8_SENS_7_Y0											63-1
	#define	LABEL_ID8_SENS_7_Y1											90-1
	#define	LABEL_ID8_SENS_7_BORDER									0
	#define	LABEL_ID8_SENS_7_MAIN_COLOR							0xFDAE
	#define	LABEL_ID8_SENS_7_BORDER_COLOR						0x0000
	#define	LABEL_ID8_SENS_7_TEXT										"Т7"
	#define	LABEL_ID8_SENS_7_TEXT_COLOR							0x0000
	#define	LABEL_ID8_SENS_7_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID8_SENS_7_TEXT_MARGIN_X					5
	#define	LABEL_ID8_SENS_7_TEXT_MARGIN_Y					0
	#define	LABEL_ID8_SENS_7_ACTION_PTR							0
	
	#define	LABEL_ID9_SENS_8_X0											0
	#define	LABEL_ID9_SENS_8_X1											80-1
	#define	LABEL_ID9_SENS_8_Y0											35-1
	#define	LABEL_ID9_SENS_8_Y1											62-1
	#define	LABEL_ID9_SENS_8_BORDER									0
	#define	LABEL_ID9_SENS_8_MAIN_COLOR							0xFFFF
	#define	LABEL_ID9_SENS_8_BORDER_COLOR						0x0000
	#define	LABEL_ID9_SENS_8_TEXT										"Т8"
	#define	LABEL_ID9_SENS_8_TEXT_COLOR							0x0000
	#define	LABEL_ID9_SENS_8_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID9_SENS_8_TEXT_MARGIN_X					5
	#define	LABEL_ID9_SENS_8_TEXT_MARGIN_Y					0
	#define	LABEL_ID9_SENS_8_ACTION_PTR							0
	
	#define	LABEL_TSET_CHANGE_X0										120-1
	#define	LABEL_TSET_CHANGE_X1										160-1
	
	#define	LABEL_ID10_TSET_X0											LABEL_TSET_CHANGE_X0
	#define	LABEL_ID10_TSET_X1											LABEL_TSET_CHANGE_X1
	#define	LABEL_ID10_TSET_Y0											220-1
	#define	LABEL_ID10_TSET_Y1											245-1
	#define	LABEL_ID10_TSET_BORDER									0
	#define	LABEL_ID10_TSET_MAIN_COLOR							0xFFFF
	#define	LABEL_ID10_TSET_BORDER_COLOR						0x0000
	#define	LABEL_ID10_TSET_TEXT										"Т уст:"
	#define	LABEL_ID10_TSET_TEXT_COLOR							0x0000
	#define	LABEL_ID10_TSET_TEXT_FONT								&impact_18ptFontInfo
	#define	LABEL_ID10_TSET_TEXT_MARGIN_X						5
	#define	LABEL_ID10_TSET_TEXT_MARGIN_Y						0
	#define	LABEL_ID10_TSET_ACTION_PTR							0
	
	#define	LABEL_ID11_TCHANGE_X0										LABEL_TSET_CHANGE_X0
	#define	LABEL_ID11_TCHANGE_X1										LABEL_TSET_CHANGE_X1
	#define	LABEL_ID11_TCHANGE_Y0										250-1
	#define	LABEL_ID11_TCHANGE_Y1										275-1
	#define	LABEL_ID11_TCHANGE_BORDER								0
	#define	LABEL_ID11_TCHANGE_MAIN_COLOR						0xFFFF
	#define	LABEL_ID11_TCHANGE_BORDER_COLOR					0x0000
	#define	LABEL_ID11_TCHANGE_TEXT									"Т изм:"
	#define	LABEL_ID11_TCHANGE_TEXT_COLOR						0x0000
	#define	LABEL_ID11_TCHANGE_TEXT_FONT						&impact_18ptFontInfo
	#define	LABEL_ID11_TCHANGE_TEXT_MARGIN_X				5
	#define	LABEL_ID11_TCHANGE_TEXT_MARGIN_Y				0
	#define	LABEL_ID11_TCHANGE_ACTION_PTR						0
	
	#define	LABEL_SENS_NUM_X0												35-1
	#define	LABEL_SENS_NUM_X1												100-1
	
	#define	LABEL_SENS_1_NUM_ID											12
	#define	LABEL_ID12_SENS_1_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID12_SENS_1_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID12_SENS_1_NUM_Y0								231-1
	#define	LABEL_ID12_SENS_1_NUM_Y1								258-1
	#define	LABEL_ID12_SENS_1_NUM_BORDER						0
	#define	LABEL_ID12_SENS_1_NUM_MAIN_COLOR				0xFDAE
	#define	LABEL_ID12_SENS_1_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID12_SENS_1_NUM_TEXT							0
	#define	LABEL_ID12_SENS_1_NUM_TEXT_COLOR				0x056A
	#define	LABEL_ID12_SENS_1_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID12_SENS_1_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID12_SENS_1_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID12_SENS_1_NUM_ACTION_PTR				0

	#define	LABEL_SENS_2_NUM_ID											13
	#define	LABEL_ID13_SENS_2_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID13_SENS_2_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID13_SENS_2_NUM_Y0								203-1
	#define	LABEL_ID13_SENS_2_NUM_Y1								230-1
	#define	LABEL_ID13_SENS_2_NUM_BORDER						0
	#define	LABEL_ID13_SENS_2_NUM_MAIN_COLOR				0xFFFF
	#define	LABEL_ID13_SENS_2_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID13_SENS_2_NUM_TEXT							0
	#define	LABEL_ID13_SENS_2_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID13_SENS_2_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID13_SENS_2_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID13_SENS_2_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID13_SENS_2_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_3_NUM_ID											14
	#define	LABEL_ID14_SENS_3_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID14_SENS_3_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID14_SENS_3_NUM_Y0								175-1
	#define	LABEL_ID14_SENS_3_NUM_Y1								202-1
	#define	LABEL_ID14_SENS_3_NUM_BORDER						0
	#define	LABEL_ID14_SENS_3_NUM_MAIN_COLOR				0xFDAE
	#define	LABEL_ID14_SENS_3_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID14_SENS_3_NUM_TEXT							0
	#define	LABEL_ID14_SENS_3_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID14_SENS_3_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID14_SENS_3_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID14_SENS_3_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID14_SENS_3_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_4_NUM_ID											15
	#define	LABEL_ID15_SENS_4_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID15_SENS_4_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID15_SENS_4_NUM_Y0								147-1
	#define	LABEL_ID15_SENS_4_NUM_Y1								174-1
	#define	LABEL_ID15_SENS_4_NUM_BORDER						0
	#define	LABEL_ID15_SENS_4_NUM_MAIN_COLOR				0xFFFF
	#define	LABEL_ID15_SENS_4_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID15_SENS_4_NUM_TEXT							0
	#define	LABEL_ID15_SENS_4_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID15_SENS_4_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID15_SENS_4_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID15_SENS_4_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID15_SENS_4_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_5_NUM_ID											16
	#define	LABEL_ID16_SENS_5_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID16_SENS_5_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID16_SENS_5_NUM_Y0								119-1
	#define	LABEL_ID16_SENS_5_NUM_Y1								146-1
	#define	LABEL_ID16_SENS_5_NUM_BORDER						0
	#define	LABEL_ID16_SENS_5_NUM_MAIN_COLOR				0xFDAE
	#define	LABEL_ID16_SENS_5_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID16_SENS_5_NUM_TEXT							0
	#define	LABEL_ID16_SENS_5_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID16_SENS_5_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID16_SENS_5_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID16_SENS_5_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID16_SENS_5_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_6_NUM_ID											17
	#define	LABEL_ID17_SENS_6_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID17_SENS_6_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID17_SENS_6_NUM_Y0								91-1
	#define	LABEL_ID17_SENS_6_NUM_Y1								118-1
	#define	LABEL_ID17_SENS_6_NUM_BORDER						0
	#define	LABEL_ID17_SENS_6_NUM_MAIN_COLOR				0xFFFF
	#define	LABEL_ID17_SENS_6_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID17_SENS_6_NUM_TEXT							0
	#define	LABEL_ID17_SENS_6_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID17_SENS_6_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID17_SENS_6_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID17_SENS_6_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID17_SENS_6_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_7_NUM_ID											18
	#define	LABEL_ID18_SENS_7_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID18_SENS_7_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID18_SENS_7_NUM_Y0								63-1
	#define	LABEL_ID18_SENS_7_NUM_Y1								90-1
	#define	LABEL_ID18_SENS_7_NUM_BORDER						0
	#define	LABEL_ID18_SENS_7_NUM_MAIN_COLOR				0xFDAE
	#define	LABEL_ID18_SENS_7_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID18_SENS_7_NUM_TEXT							0
	#define	LABEL_ID18_SENS_7_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID18_SENS_7_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID18_SENS_7_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID18_SENS_7_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID18_SENS_7_NUM_ACTION_PTR				0
	
	#define	LABEL_SENS_8_NUM_ID											19
	#define	LABEL_ID19_SENS_8_NUM_X0								LABEL_SENS_NUM_X0
	#define	LABEL_ID19_SENS_8_NUM_X1								LABEL_SENS_NUM_X1
	#define	LABEL_ID19_SENS_8_NUM_Y0								35-1
	#define	LABEL_ID19_SENS_8_NUM_Y1								62-1
	#define	LABEL_ID19_SENS_8_NUM_BORDER						0
	#define	LABEL_ID19_SENS_8_NUM_MAIN_COLOR				0xFFFF
	#define	LABEL_ID19_SENS_8_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID19_SENS_8_NUM_TEXT							0
	#define	LABEL_ID19_SENS_8_NUM_TEXT_COLOR				0x0000
	#define	LABEL_ID19_SENS_8_NUM_TEXT_FONT					&impact_18ptFontInfo
	#define	LABEL_ID19_SENS_8_NUM_TEXT_MARGIN_X			5
	#define	LABEL_ID19_SENS_8_NUM_TEXT_MARGIN_Y			0
	#define	LABEL_ID19_SENS_8_NUM_ACTION_PTR				0
	
	#define	LABEL_TSET_NUM_ID												20
	#define	LABEL_ID20_TSET_NUM_X0									GUI.objList.ObjLabelList[10].textLenght+10
	#define	LABEL_ID20_TSET_NUM_X1									215-1
	#define	LABEL_ID20_TSET_NUM_Y0									220-1
	#define	LABEL_ID20_TSET_NUM_Y1									245-1
	#define	LABEL_ID20_TSET_NUM_BORDER							0
	#define	LABEL_ID20_TSET_NUM_MAIN_COLOR					0xFFFF
	#define	LABEL_ID20_TSET_NUM_BORDER_COLOR				0x0000
	#define	LABEL_ID20_TSET_NUM_TEXT								"0"
	#define	LABEL_ID20_TSET_NUM_TEXT_COLOR					0x0000
	#define	LABEL_ID20_TSET_NUM_TEXT_FONT						&impact_18ptFontInfo
	#define	LABEL_ID20_TSET_NUM_TEXT_MARGIN_X				5
	#define	LABEL_ID20_TSET_NUM_TEXT_MARGIN_Y				0
	#define	LABEL_ID20_TSET_NUM_ACTION_PTR					0
	
	#define	LABEL_TCHANGE_NUM_ID										21
	#define	LABEL_ID21_TCHANGE_NUM_X0								GUI.objList.ObjLabelList[11].textLenght+5
	#define	LABEL_ID21_TCHANGE_NUM_X1								215-1
	#define	LABEL_ID21_TCHANGE_NUM_Y0								250-1
	#define	LABEL_ID21_TCHANGE_NUM_Y1								275-1
	#define	LABEL_ID21_TCHANGE_NUM_BORDER						0
	#define	LABEL_ID21_TCHANGE_NUM_MAIN_COLOR				0xFFFF
	#define	LABEL_ID21_TCHANGE_NUM_BORDER_COLOR			0x0000
	#define	LABEL_ID21_TCHANGE_NUM_TEXT							"123"
	#define	LABEL_ID21_TCHANGE_NUM_TEXT_COLOR				0x056A
	#define	LABEL_ID21_TCHANGE_NUM_TEXT_FONT				&impact_18ptFontInfo
	#define	LABEL_ID21_TCHANGE_NUM_TEXT_MARGIN_X		5
	#define	LABEL_ID21_TCHANGE_NUM_TEXT_MARGIN_Y		0
	#define	LABEL_ID21_TCHANGE_NUM_ACTION_PTR				0
	
	#define	LABEL_STATE_ID													22
	#define	LABEL_STATE_TEXT_0											"ОХЛАЖ."
	#define	LABEL_STATE_TEXT_1											"НАГРЕВ"
	#define	LABEL_STATE_MAIN_COLOR_0								0xD6DA
	#define	LABEL_STATE_MAIN_COLOR_1								0xFF20//0x7569
	#define	LABEL_ID22_STATE_X0											0
	#define	LABEL_ID22_STATE_X1											100-1
	#define	LABEL_ID22_STATE_Y0											0
	#define	LABEL_ID22_STATE_Y1											34-1
	#define	LABEL_ID22_STATE_BORDER									2
	#define	LABEL_ID22_STATE_MAIN_COLOR							0xD6DA
	#define	LABEL_ID22_STATE_BORDER_COLOR						0x0000
	#define	LABEL_ID22_STATE_TEXT										"ОХЛАЖ."
	#define	LABEL_ID22_STATE_TEXT_COLOR							0x0000
	#define	LABEL_ID22_STATE_TEXT_FONT							&impact_18ptFontInfo
	#define	LABEL_ID22_STATE_TEXT_MARGIN_X					10
	#define	LABEL_ID22_STATE_TEXT_MARGIN_Y					2
	#define	LABEL_ID22_STATE_ACTION_PTR							0

	#define	BUTTON_TPLUS_X0													120-1
	#define	BUTTON_TPLUS_X1													220-1

	#define	BUTTON_TPLUS_ID													0
	#define	BUTTON_TPLUS_CLICK_COLOR								0xFF20
	#define	BUTTON_ID0_TPLUS_X0											BUTTON_TPLUS_X0
	#define	BUTTON_ID0_TPLUS_X1											BUTTON_TPLUS_X1
	#define	BUTTON_ID0_TPLUS_Y0											145-1
	#define	BUTTON_ID0_TPLUS_Y1											195-1
	#define	BUTTON_ID0_TPLUS_BORDER									1
	#define	BUTTON_ID0_TPLUS_MAIN_COLOR							0x7569
	#define	BUTTON_ID0_TPLUS_BORDER_COLOR						0x0000
	#define	BUTTON_ID0_TPLUS_TEXT										0
	#define	BUTTON_ID0_TPLUS_TEXT_COLOR							0x0000
	#define	BUTTON_ID0_TPLUS_TEXT_FONT							&impact_18ptFontInfo
	#define	BUTTON_ID0_TPLUS_TEXT_MARGIN_X					0
	#define	BUTTON_ID0_TPLUS_TEXT_MARGIN_Y					0
	#define	BUTTON_ID0_TPLUS_STATE									0
	#define	BUTTON_ID0_TPLUS_DELAY_SEC							100
	#define	BUTTON_ID0_TPLUS_ACTION_PTR							GUI_CTC_buttonTPlusClick

	#define	BUTTON_TMINUS_ID												1
	#define	BUTTON_TMINUS_CLICK_COLOR								0xFF20
	#define	BUTTON_ID1_TMINUS_X0										BUTTON_TPLUS_X0
	#define	BUTTON_ID1_TMINUS_X1										BUTTON_TPLUS_X1
	#define	BUTTON_ID1_TMINUS_Y0										80-1
	#define	BUTTON_ID1_TMINUS_Y1										130-1
	#define	BUTTON_ID1_TMINUS_BORDER								1
	#define	BUTTON_ID1_TMINUS_MAIN_COLOR						0x7569
	#define	BUTTON_ID1_TMINUS_BORDER_COLOR					0x0000
	#define	BUTTON_ID1_TMINUS_TEXT									0
	#define	BUTTON_ID1_TMINUS_TEXT_COLOR						0x0000
	#define	BUTTON_ID1_TMINUS_TEXT_FONT							&impact_18ptFontInfo
	#define	BUTTON_ID1_TMINUS_TEXT_MARGIN_X					0
	#define	BUTTON_ID1_TMINUS_TEXT_MARGIN_Y					0
	#define	BUTTON_ID1_TMINUS_STATE									0
	#define	BUTTON_ID1_TMINUS_DELAY_SEC							100
	#define	BUTTON_ID1_TMINUS_ACTION_PTR						GUI_CTC_buttonTMinusClick

	#define	BUTTON_SWITCHER_ID											2
	#define	BUTTON_SWITCHER_ID											2
	#define	BUTTON_SWITCHER_TEXT_0									"ВЫКЛ"
	#define	BUTTON_SWITCHER_TEXT_1									"ВКЛ"
	#define	BUTTON_SWITCHER_MAIN_COLOR_0						0xD6DA
	#define	BUTTON_SWITCHER_MAIN_COLOR_1						0xFF20//0x7569
	#define	BUTTON_ID2_SWITCHER_X0									BUTTON_TPLUS_X0
	#define	BUTTON_ID2_SWITCHER_X1									BUTTON_TPLUS_X1
	#define	BUTTON_ID2_SWITCHER_Y0									0
	#define	BUTTON_ID2_SWITCHER_Y1									50-1
	#define	BUTTON_ID2_SWITCHER_BORDER							1
	#define	BUTTON_ID2_SWITCHER_MAIN_COLOR					0xD6DA
	#define	BUTTON_ID2_SWITCHER_BORDER_COLOR				0x0000
	#define	BUTTON_ID2_SWITCHER_TEXT								"ВЫКЛ"
	#define	BUTTON_ID2_SWITCHER_TEXT_COLOR					0x0000
	#define	BUTTON_ID2_SWITCHER_TEXT_FONT						&impact_18ptFontInfo
	#define	BUTTON_ID2_SWITCHER_TEXT_MARGIN_X				20
	#define	BUTTON_ID2_SWITCHER_TEXT_MARGIN_Y				10
	#define	BUTTON_ID2_SWITCHER_STATE								0
	#define	BUTTON_ID2_SWITCHER_DELAY_SEC						100
	#define	BUTTON_ID2_SWITCHER_ACTION_PTR					GUI_CTC_buttonStateClick
	
	
	extern char strBufNum[NUM_STR_LEN];
	
	
	// прототипы функций
	void	GUI_CTC_pageMainInit(void);
	void	GUI_CTC_pageLogoInit(void);
	
	void	GUI_CTC_buttonStateClick(void);
	void	GUI_CTC_labelState(uint8_t labelNum,	uint8_t state);
	
	void	GUI_CTC_buttonTPlusDraw(uint16_t mainColor);
	void	GUI_CTC_buttonTPlusClick(void);
	void	GUI_CTC_buttonTPlusReturnColor(void);
	
	void	GUI_CTC_buttonTMinusDraw(uint16_t mainColor);
	void	GUI_CTC_buttonTMinusClick(void);
	void	GUI_CTC_buttonTMinusReturnColor(void);
	
	void	GUI_CTC_labelTSetNum(uint8_t labelNum, char *str, int32_t setNum);
	
	void	GUI_CTC_objAction(void);
		
	
#endif
