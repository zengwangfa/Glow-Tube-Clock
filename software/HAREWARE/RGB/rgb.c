#include "rgb.h"
#include "stm32f10x.h"

void RGB_Init(void)
{
	GPIO_InitTypeDef GPIO_Initrespire;
	
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//GPIOA
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//GPIOB
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);//GPIOC
	
	
	GPIO_Initrespire.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Initrespire.GPIO_Pin=GPIO_Pin_6|GPIO_Pin_7;
	GPIO_Initrespire.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initrespire);
	
	
	GPIO_Initrespire.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Initrespire.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_9|GPIO_Pin_10|GPIO_Pin_11;
	GPIO_Initrespire.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_Initrespire);
	
	
	GPIO_Initrespire.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Initrespire.GPIO_Pin=GPIO_Pin_4|GPIO_Pin_5;
	GPIO_Initrespire.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_Initrespire);

}

void RGB_R(void)
{
  RGB1_0; 
	RGB2_1;
	RGB3_0;
	
	RGB4_0;
	RGB5_1;
	RGB6_0;
	
	RGB7_0;
	RGB8_1;
	RGB9_0;
	
}

void RGB_G(void)
	{
  RGB1_1; 
	RGB2_0;
	RGB3_0;
	
	RGB4_1;
	RGB5_0;
	RGB6_0;
	
	RGB7_1;
	RGB8_0;
	RGB9_0;
	
}
	
	void RGB_B(void)
	{
  RGB1_0; 
	RGB2_0;
	RGB3_1;
	
	RGB4_0;
	RGB5_0;
	RGB6_1;
	
	RGB7_0;
	RGB8_0;
	RGB9_1;
	
}
	
void RGB_BG(void)
	{
  RGB1_1; 
	RGB2_0;
	RGB3_1;
	
	RGB4_1;
	RGB5_0;
	RGB6_1;
	
	RGB7_1;
	RGB8_0;
	RGB9_1;
	
}

void RGB_RB(void)
	{
  RGB1_0; 
	RGB2_1;
	RGB3_1;
	
	RGB4_0;
	RGB5_1;
	RGB6_1;
	
	RGB7_0;
	RGB8_1;
	RGB9_1;
	
	}

	void RGB_RG(void)
	{
  RGB1_1; 
	RGB2_1;
	RGB3_0;
	
	RGB4_1;
	RGB5_1;
	RGB6_0;
	
	RGB7_1;
	RGB8_1;
	RGB9_0;
	
	}

	void RGB_OFF(void)
{
  RGB1_0; 
	RGB2_0;
	RGB3_0;
	
	RGB4_0;
	RGB5_0;
	RGB6_0;
	
	RGB7_0;
	RGB8_0;
	RGB9_0;
	
}

void RGB_ON(void)
{
  RGB1_1; 
	RGB2_1;
	RGB3_1;
	
	RGB4_1;
	RGB5_1;
	RGB6_1;
	
	RGB7_1;
	RGB8_1;
	RGB9_1;
	
}

