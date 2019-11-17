#ifndef __MYIIC_H
#define __MYIIC_H
#include "stm32f10x.h"
   	   		   
#define SCL_H() GPIO_SetBits(GPIOA,GPIO_Pin_5)
#define SCL_L() GPIO_ResetBits(GPIOA,GPIO_Pin_5)

#define SDA_H() GPIO_SetBits(GPIOA,GPIO_Pin_4)
#define SDA_L() GPIO_ResetBits(GPIOA,GPIO_Pin_4)

#define IN_SDA() GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4)

#define ds_a = 0 IN_SDA

void IIC_Start(void);
void IIC_Stop(void);
void IIC_Ack(u8 a);
u8 IIC_Write_Byte(u8 dat);
u8 IIC_Read_Byte(void);

void IIC_GPIO_Config(void);
void IIC_SDA_OUT(void);
void IIC_SDA_IN(void);


#endif
















