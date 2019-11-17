#ifndef __Neon_H
#define __Neon_H


#define Neon1_0 GPIO_SetBits(GPIOA,GPIO_Pin_9)//µãÁÁ
#define Neon1_1 GPIO_ResetBits(GPIOA,GPIO_Pin_9)//Ï¨Ãð
	
#define Neon2_0 GPIO_SetBits(GPIOA,GPIO_Pin_10)
#define Neon2_1 GPIO_ResetBits(GPIOA,GPIO_Pin_10)
	
#define Neon3_0 GPIO_SetBits(GPIOA,GPIO_Pin_11)
#define Neon3_1 GPIO_ResetBits(GPIOA,GPIO_Pin_11)
	
#define Neon4_0 GPIO_SetBits(GPIOA,GPIO_Pin_12)
#define Neon4_1 GPIO_ResetBits(GPIOA,GPIO_Pin_12)


void Neon_Init(void);
void Neon_Flip(void);

#endif

