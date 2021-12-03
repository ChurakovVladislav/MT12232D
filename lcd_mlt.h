#ifndef __LCD_MLT_H
#define __LCD_MLT_H
//----------------------------------------------------------------------------------------------------
/* Standard includes. */
#include <stdint.h>
#include <stdbool.h>
///* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "semphr.h"
/* MDR includes. */
#include "MDR32F9Qx_rst_clk.h"
#include "MDR32F9Qx_port.h"
//----------------------------------------------------------------------------------------------------
extern SemaphoreHandle_t xRecursiveMutexBufferLCD;
//----------------------------------------------------------------------------------------------------
#define LCD_CONTROL_PCLK_PORT       RST_CLK_PCLK_PORTA
#define LCD_DATA_PCLK_PORT          RST_CLK_PCLK_PORTA

#define LCD_CONTROL_PORT	        MDR_PORTA
#define LCD_A0						PORT_Pin_7
#define LCD_RW						PORT_Pin_8
#define LCD_E						PORT_Pin_9
#define LCD_RES						PORT_Pin_10
#define LCD_CS						PORT_Pin_11

#define LCD_DATA_PORT			    MDR_PORTA
#define LCD_DB0						PORT_Pin_0
#define LCD_DB1						PORT_Pin_1
#define LCD_DB2						PORT_Pin_2
#define LCD_DB3						PORT_Pin_3
#define LCD_DB4						PORT_Pin_3
#define LCD_DB5						PORT_Pin_4
#define LCD_DB6						PORT_Pin_5
#define LCD_DB7						PORT_Pin_6

#define ADC_L					0xA1
#define ADC_R					0xA0

#define WidthLCD     			122                 
#define HightLCD     			32          				 
//----------------------------------------------------------------------------------------------------
extern void LCD_InitGPIO (void);
extern void LCD_Init (void);
extern void LCD_SetCursor(uint8_t posCursor, uint8_t page);
extern void LCD_SetPage(uint8_t page);
extern void LCD_SetPositionCursor(uint8_t posCursor);
extern uint8_t LCD_GetPage(void);
extern uint8_t LCD_GetPositionCursor(void);
extern void LCD_DisplayFill(uint8_t byte);
extern void LCD_ClearSumbol(uint8_t posCursor, uint8_t page);
extern void LCD_ClearPage(uint8_t page);
extern void LCD_WriteSymbol(char sumbol);
extern void LCD_WriteString(const char* str);
extern void LCD_DrawHorizontalLine(uint8_t y);
extern void LCD_DrawVerticalLine(uint8_t x);
extern void LCD_DrawDisplay(void);
extern void LCD_CursorOn(void);
extern void LCD_CursorOff(void);
extern void LCD_CursorBlink(void);
//----------------------------------------------------------------------------------------------------
#endif /*__LCD_MLT_H*/
