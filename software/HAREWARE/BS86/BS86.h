#ifndef __BS86_H
#define __BS86_H
#include "sys.h"


#define KEY1  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_7)//��ȡ����1
#define KEY2  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_6)//��ȡ����2
#define KEY3  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_15)//��ȡ����3
#define KEY4  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_14)//��ȡ����4
#define KEY5  GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)//��ȡ����5


#define KEY1_PRES	1		//KEY 
#define KEY2_PRES	2		//KEY
#define KEY3_PRES	3		//  
#define KEY4_PRES	4		//
#define KEY5_PRES	5		//

void BS86_Init(void);//IO��ʼ��
u8 BS86_Scan(u8 mode);  	//����ɨ�躯��					    
#endif


