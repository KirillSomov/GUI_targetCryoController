
#include "Font.h"

/* 
**  Font data for Calibri 14pt
*/

/* Character bitmaps for Calibri 14pt */
const uint8_t calibri_14ptBitmaps[] = 
{
	/* @0 '-' (4 pixels wide) */
	//     
	//     
	//     
	//     
	//     
	//     
	//     
	//     
	// ####
	//     
	//     
	//     
	//     
	//     
	//     
	//     
	0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 

	/* @8 '.' (2 pixels wide) */
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	// ##
	// ##
	//   
	//   
	//   
	0x00, 0x00, 
	0x18, 0x18, 

	/* @12 '0' (8 pixels wide) */
	//         
	//   ####  
	//  ##  ## 
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	//  ##  ## 
	//   ####  
	//         
	//         
	//         
	0xF8, 0xFC, 0x06, 0x02, 0x02, 0x06, 0xFC, 0xF8, 
	0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, 

	/* @28 '1' (8 pixels wide) */
	//         
	//   ###   
	//  ####   
	// ## ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	// ########
	//         
	//         
	//         
	0x08, 0x0C, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 
	0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10, 

	/* @44 'A' (11 pixels wide) */
	//            
	//     ###    
	//     ###    
	//    ## ##   
	//    ## ##   
	//    ## ##   
	//   ##   ##  
	//   ##   ##  
	//  ##     ## 
	//  ######### 
	//  ##     ## 
	// ##       ##
	// ##       ##
	//            
	//            
	//            
	0x00, 0x00, 0xC0, 0xF8, 0x3E, 0x06, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 
	0x18, 0x1F, 0x07, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, 0x1F, 0x18, 

	/* @66 'C' (9 pixels wide) */
	//          
	//    ##### 
	//  ###    #
	//  ##      
	// ##       
	// ##       
	// ##       
	// ##       
	// ##       
	// ##       
	//  ##      
	//  ###    #
	//    ##### 
	//          
	//          
	//          
	0xF0, 0xFC, 0x0C, 0x06, 0x02, 0x02, 0x02, 0x02, 0x04, 
	0x03, 0x0F, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x10, 0x08, 

	/* @84 'E' (7 pixels wide) */
	//        
	// #######
	// ##     
	// ##     
	// ##     
	// ##     
	// ###### 
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// #######
	//        
	//        
	//        
	0xFE, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x02, 
	0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 

	/* @98 'F' (7 pixels wide) */
	//        
	// #######
	// ##     
	// ##     
	// ##     
	// ##     
	// #######
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	//        
	//        
	//        
	0xFE, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x42, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 

	/* @112 'H' (10 pixels wide) */
	//           
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##########
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	//           
	//           
	//           
	0xFE, 0xFE, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xFE, 0xFE, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 

	/* @132 'I' (2 pixels wide) */
	//   
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	// ##
	//   
	//   
	//   
	0xFE, 0xFE, 
	0x1F, 0x1F, 

	/* @136 'J' (5 pixels wide) */
	//      
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	//    ##
	// #  ##
	//  ### 
	//      
	//      
	//      
	0x00, 0x00, 0x00, 0xFE, 0xFE, 
	0x08, 0x10, 0x10, 0x1F, 0x0F, 

	/* @146 'L' (7 pixels wide) */
	//        
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	// #######
	//        
	//        
	//        
	0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1F, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 

	/* @160 'N' (10 pixels wide) */
	//           
	// ###     ##
	// ####    ##
	// ## #    ##
	// ## ##   ##
	// ## ##   ##
	// ##  ##  ##
	// ##  ##  ##
	// ##   ## ##
	// ##   ## ##
	// ##    # ##
	// ##    ####
	// ##     ###
	//           
	//           
	//           
	0xFE, 0xFE, 0x06, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0xFE, 0xFE, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x18, 0x1F, 0x1F, 

	/* @180 'O' (11 pixels wide) */
	//            
	//    #####   
	//  ###   ### 
	//  ##     ## 
	// ##       ##
	// ##       ##
	// ##       ##
	// ##       ##
	// ##       ##
	// ##       ##
	//  ##     ## 
	//  ###   ### 
	//    #####   
	//            
	//            
	//            
	0xF0, 0xFC, 0x0C, 0x06, 0x02, 0x02, 0x02, 0x06, 0x0C, 0xFC, 0xF0, 
	0x03, 0x0F, 0x0C, 0x18, 0x10, 0x10, 0x10, 0x18, 0x0C, 0x0F, 0x03, 

	/* @202 'R' (9 pixels wide) */
	//          
	// ######   
	// ##   ##  
	// ##    ## 
	// ##    ## 
	// ##    ## 
	// ##   ##  
	// ######   
	// ##   ##  
	// ##   ##  
	// ##    ## 
	// ##    ## 
	// ##     ##
	//          
	//          
	//          
	0xFE, 0xFE, 0x82, 0x82, 0x82, 0xC6, 0x7C, 0x38, 0x00, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1C, 0x10, 

	/* @220 'S' (7 pixels wide) */
	//        
	//   #### 
	//  ##  ##
	// ##     
	// ##     
	// ###    
	//  ####  
	//    ### 
	//     ###
	//      ##
	//      ##
	// ##  ## 
	//  ####  
	//        
	//        
	//        
	0x38, 0x7C, 0x66, 0xC2, 0xC2, 0x86, 0x04, 
	0x08, 0x18, 0x10, 0x10, 0x19, 0x0F, 0x07, 

	/* @234 'T' (8 pixels wide) */
	//         
	// ########
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//         
	//         
	//         
	0x02, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 

	/* @250 'U' (10 pixels wide) */
	//           
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	// ##      ##
	//  ##    ## 
	//   ######  
	//           
	//           
	//           
	0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 
	0x07, 0x0F, 0x18, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 

	/* @270 'v' (9 pixels wide) */
	//          
	//          
	//          
	//          
	// ##     ##
	// ##     ##
	//  ##   ## 
	//  ##   ## 
	//  ##   ## 
	//   ## ##  
	//   ## ##  
	//    ###   
	//    ###   
	//          
	//          
	//          
	0x30, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x30, 
	0x00, 0x01, 0x07, 0x1E, 0x18, 0x1E, 0x07, 0x01, 0x00, 

	/* @288 'В' (8 pixels wide) */
	//         
	// ######  
	// ##   ## 
	// ##   ## 
	// ##   ## 
	// ##   #  
	// ######  
	// ##   ## 
	// ##    ##
	// ##    ##
	// ##    ##
	// ##   ## 
	// ######  
	//         
	//         
	//         
	0xFE, 0xFE, 0x42, 0x42, 0x42, 0xFE, 0x9C, 0x00, 
	0x1F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 

	/* @304 'К' (8 pixels wide) */
	//         
	// ##    ##
	// ##    ##
	// ##   ## 
	// ##   ## 
	// ##  ##  
	// #####   
	// ##  ##  
	// ##   ## 
	// ##   ## 
	// ##   ## 
	// ##    ##
	// ##    ##
	//         
	//         
	//         
	0xFE, 0xFE, 0x40, 0x40, 0xE0, 0xB8, 0x1E, 0x06, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x18, 

	/* @320 'М' (13 pixels wide) */
	//              
	// ###       ###
	// ####     ####
	// ####     ####
	// ## #     # ##
	// ## ##   ## ##
	// ## ##   #  ##
	// ##  #   #  ##
	// ##  ## ##  ##
	// ##   # #   ##
	// ##   # #   ##
	// ##   ###   ##
	// ##    #    ##
	//              
	//              
	//              
	0xFE, 0xFE, 0x0E, 0x7C, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x3C, 0x0E, 0xFE, 0xFE, 
	0x1F, 0x1F, 0x00, 0x00, 0x01, 0x0F, 0x18, 0x0F, 0x01, 0x00, 0x00, 0x1F, 0x1F, 

	/* @346 'а' (7 pixels wide) */
	//        
	//        
	//        
	//        
	//  ##### 
	// #    ##
	//      ##
	//      ##
	//  ######
	// ##   ##
	// ##   ##
	// ##  ###
	//  ######
	//        
	//        
	//        
	0x20, 0x10, 0x10, 0x10, 0x10, 0xF0, 0xE0, 
	0x0E, 0x1F, 0x11, 0x11, 0x19, 0x1F, 0x1F, 

	/* @360 'в' (7 pixels wide) */
	//        
	//        
	//        
	//        
	// ###### 
	// ##   ##
	// ##   ##
	// ##   ##
	// ###### 
	// ##   ##
	// ##   ##
	// ##   ##
	// ###### 
	//        
	//        
	//        
	0xF0, 0xF0, 0x10, 0x10, 0x10, 0xF0, 0xE0, 
	0x1F, 0x1F, 0x11, 0x11, 0x11, 0x1F, 0x0E, 

	/* @374 'г' (5 pixels wide) */
	//      
	//      
	//      
	//      
	// #####
	// ##   
	// ##   
	// ##   
	// ##   
	// ##   
	// ##   
	// ##   
	// ##   
	//      
	//      
	//      
	0xF0, 0xF0, 0x10, 0x10, 0x10, 
	0x1F, 0x1F, 0x00, 0x00, 0x00, 

	/* @384 'д' (10 pixels wide) */
	//           
	//           
	//           
	//           
	//   ####### 
	//   ##   ## 
	//   ##   ## 
	//   ##   ## 
	//   #    ## 
	//  ##    ## 
	//  ##    ## 
	//  #     ## 
	// ##########
	// #        #
	// #        #
	// #        #
	0x00, 0x00, 0xF0, 0xF0, 0x10, 0x10, 0x10, 0xF0, 0xF0, 0x00, 
	0xF0, 0x1E, 0x17, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0xF0, 

	/* @404 'е' (7 pixels wide) */
	//        
	//        
	//        
	//        
	//   #### 
	//  ##  ##
	// ##   ##
	// ##   ##
	// #######
	// ##     
	// ##     
	//  ##   #
	//   #### 
	//        
	//        
	//        
	0xC0, 0xE0, 0x30, 0x10, 0x10, 0xF0, 0xE0, 
	0x07, 0x0F, 0x19, 0x11, 0x11, 0x11, 0x09, 

	/* @418 'и' (7 pixels wide) */
	//        
	//        
	//        
	//        
	// ##   ##
	// ##  ###
	// ##  ###
	// ## ####
	// ## # ##
	// #### ##
	// ###  ##
	// ###  ##
	// ##   ##
	//        
	//        
	//        
	0xF0, 0xF0, 0x00, 0x80, 0xE0, 0xF0, 0xF0, 
	0x1F, 0x1F, 0x0E, 0x03, 0x00, 0x1F, 0x1F, 

	/* @432 'й' (7 pixels wide) */
	//  ##  ##
	//  ##  ##
	//   #### 
	//        
	// ##   ##
	// ##  ###
	// ##  ###
	// ## ####
	// ## # ##
	// #### ##
	// ###  ##
	// ###  ##
	// ##   ##
	//        
	//        
	//        
	0xF0, 0xF3, 0x07, 0x84, 0xE4, 0xF7, 0xF3, 
	0x1F, 0x1F, 0x0E, 0x03, 0x00, 0x1F, 0x1F, 

	/* @446 'к' (7 pixels wide) */
	//        
	//        
	//        
	//        
	// ##   ##
	// ##   ##
	// ##  ## 
	// ##  ## 
	// ####   
	// ##  ## 
	// ##  ## 
	// ##   ##
	// ##   ##
	//        
	//        
	//        
	0xF0, 0xF0, 0x00, 0x00, 0xC0, 0xF0, 0x30, 
	0x1F, 0x1F, 0x01, 0x01, 0x06, 0x1E, 0x18, 

	/* @460 'л' (8 pixels wide) */
	//         
	//         
	//         
	//         
	//    #####
	//    #  ##
	//    #  ##
	//    #  ##
	//   ##  ##
	//   #   ##
	//   #   ##
	//  ##   ##
	// ##    ##
	//         
	//         
	//         
	0x00, 0x00, 0x00, 0xF0, 0x10, 0x10, 0xF0, 0xF0, 
	0x10, 0x18, 0x0F, 0x01, 0x00, 0x00, 0x1F, 0x1F, 

	/* @476 'м' (11 pixels wide) */
	//            
	//            
	//            
	//            
	// ###     ###
	// ###     ###
	// ####   ####
	// ####   ####
	// ## ## ## ##
	// ## ## ## ##
	// ##  # #  ##
	// ##  ###  ##
	// ##  ##   ##
	//            
	//            
	//            
	0xF0, 0xF0, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF0, 
	0x1F, 0x1F, 0x00, 0x03, 0x1F, 0x18, 0x0F, 0x03, 0x00, 0x1F, 0x1F, 

	/* @498 'н' (7 pixels wide) */
	//        
	//        
	//        
	//        
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// #######
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	//        
	//        
	//        
	0xF0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0xF0, 
	0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F, 

	/* @512 'о' (8 pixels wide) */
	//         
	//         
	//         
	//         
	//   ####  
	//  ##  ## 
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	//  ##  ## 
	//   ####  
	//         
	//         
	//         
	0xC0, 0xE0, 0x30, 0x10, 0x10, 0x30, 0xE0, 0xC0, 
	0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0F, 0x07, 

	/* @528 'р' (8 pixels wide) */
	//         
	//         
	//         
	//         
	// ## ###  
	// ###  ## 
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ##    ##
	// ###  ## 
	// ## ###  
	// ##      
	// ##      
	// ##      
	0xF0, 0xF0, 0x20, 0x10, 0x10, 0x30, 0xE0, 0xC0, 
	0xFF, 0xFF, 0x08, 0x10, 0x10, 0x18, 0x0F, 0x07, 

	/* @544 'с' (7 pixels wide) */
	//        
	//        
	//        
	//        
	//   #### 
	//  ##   #
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	//  ##   #
	//   #### 
	//        
	//        
	//        
	0xC0, 0xE0, 0x30, 0x10, 0x10, 0x10, 0x20, 
	0x07, 0x0F, 0x18, 0x10, 0x10, 0x10, 0x08, 

	/* @558 'т' (8 pixels wide) */
	//         
	//         
	//         
	//         
	// ########
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//    ##   
	//         
	//         
	//         
	0x10, 0x10, 0x10, 0xF0, 0xF0, 0x10, 0x10, 0x10, 
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 

	/* @574 'ш' (12 pixels wide) */
	//             
	//             
	//             
	//             
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ##   ##   ##
	// ############
	//             
	//             
	//             
	0xF0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0xF0, 
	0x1F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x1F, 

	/* @598 'ы' (10 pixels wide) */
	//           
	//           
	//           
	//           
	// ##      ##
	// ##      ##
	// ##      ##
	// ######  ##
	// ##   ## ##
	// ##   ## ##
	// ##   ## ##
	// ##   ## ##
	// #####   ##
	//           
	//           
	//           
	0xF0, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xF0, 0xF0, 
	0x1F, 0x1F, 0x10, 0x10, 0x10, 0x0F, 0x0F, 0x00, 0x1F, 0x1F, 
};

/* Character descriptors for Calibri 14pt(block #0) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock0[][3] = 
{
	{4, 2, 0}, 		/* - */ 
	{2, 2, 8}, 		/* . */ 
	{0, 0, 0}, 		/* / */ 
	{8, 2, 12}, 		/* 0 */ 
	{8, 2, 28}, 		/* 1 */ 
};

/* Character descriptors for Calibri 14pt(block #1) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock1[][3] = 
{
	{11, 2, 44}, 		/* A */ 
	{0, 0, 0}, 		/* B */ 
	{9, 2, 66}, 		/* C */ 
	{0, 0, 0}, 		/* D */ 
	{7, 2, 84}, 		/* E */ 
	{7, 2, 98}, 		/* F */ 
	{0, 0, 0}, 		/* G */ 
	{10, 2, 112}, 		/* H */ 
	{2, 2, 132}, 		/* I */ 
	{5, 2, 136}, 		/* J */ 
	{0, 0, 0}, 		/* K */ 
	{7, 2, 146}, 		/* L */ 
	{0, 0, 0}, 		/* M */ 
	{10, 2, 160}, 		/* N */ 
	{11, 2, 180}, 		/* O */ 
	{0, 0, 0}, 		/* P */ 
	{0, 0, 0}, 		/* Q */ 
	{9, 2, 202}, 		/* R */ 
	{7, 2, 220}, 		/* S */ 
	{8, 2, 234}, 		/* T */ 
	{10, 2, 250}, 		/* U */ 
};

/* Character descriptors for Calibri 14pt(block #2) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock2[][3] = 
{
	{9, 2, 270}, 		/* v */ 
};

/* Character descriptors for Calibri 14pt(block #3) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock3[][3] = 
{
	{8, 2, 288}, 		/* В */ 
};

/* Character descriptors for Calibri 14pt(block #4) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock4[][3] = 
{
	{8, 2, 304}, 		/* К */ 
	{0, 0, 0}, 		/* Л */ 
	{13, 2, 320}, 		/* М */ 
};

/* Character descriptors for Calibri 14pt(block #5) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock5[][3] = 
{
	{7, 2, 346}, 		/* а */ 
	{0, 0, 0}, 		/* б */ 
	{7, 2, 360}, 		/* в */ 
	{5, 2, 374}, 		/* г */ 
	{10, 2, 384}, 		/* д */ 
	{7, 2, 404}, 		/* е */ 
	{0, 0, 0}, 		/* ж */ 
	{0, 0, 0}, 		/* з */ 
	{7, 2, 418}, 		/* и */ 
	{7, 2, 432}, 		/* й */ 
	{7, 2, 446}, 		/* к */ 
	{8, 2, 460}, 		/* л */ 
	{11, 2, 476}, 		/* м */ 
	{7, 2, 498}, 		/* н */ 
	{8, 2, 512}, 		/* о */ 
	{0, 0, 0}, 		/* п */ 
	{8, 2, 528}, 		/* р */ 
	{7, 2, 544}, 		/* с */ 
	{8, 2, 558}, 		/* т */ 
};

/* Character descriptors for Calibri 14pt(block #6) */
/* { [Char width in bits], [Char height in bytes], [Offset into calibri_14ptCharBitmaps in bytes] } */
const uint16_t calibri_14ptDescriptorsBlock6[][3] = 
{
	{12, 2, 574}, 		/* ш */ 
	{0, 0, 0}, 		/* щ */ 
	{0, 0, 0}, 		/* ъ */ 
	{10, 2, 598}, 		/* ы */ 
};

/* Block lookup array for Calibri 14pt  */
/* { start character, end character, ptr to descriptor block array } */
const struct fontCharInfoLookup calibri_14ptBlockLookup[] = 
{
	{'-', '1', &calibri_14ptDescriptorsBlock0[0]},
	{'A', 'U', &calibri_14ptDescriptorsBlock1[0]},
	{'v', 'v', &calibri_14ptDescriptorsBlock2[0]},
	{194, 194, &calibri_14ptDescriptorsBlock3[0]},
	{202, 204, &calibri_14ptDescriptorsBlock4[0]},
	{224, 242, &calibri_14ptDescriptorsBlock5[0]},
	{248, 251, &calibri_14ptDescriptorsBlock6[0]},
};

/* Font information for Calibri 14pt */
const struct fontInfo calibri_14ptFontInfo =
{
	'-', /*  Start character */
	251, /*  End character */
	2, /*  Width, in pixels, of space character */
	calibri_14ptBlockLookup, /*  Character block lookup */
	7,
	0, /*  Character descriptor array */
	calibri_14ptBitmaps, /*  Character bitmap array */
};
