#ifndef __RGB_H
#define __RGB_H

#define RGB1_0 GPIO_SetBits(GPIOA,GPIO_Pin_6)
#define RGB1_1 GPIO_ResetBits(GPIOA,GPIO_Pin_6)
	
#define RGB2_0 GPIO_SetBits(GPIOA,GPIO_Pin_7)
#define RGB2_1 GPIO_ResetBits(GPIOA,GPIO_Pin_7)
	
#define RGB3_0 GPIO_SetBits(GPIOC,GPIO_Pin_4)
#define RGB3_1 GPIO_ResetBits(GPIOC,GPIO_Pin_4)
	
#define RGB4_0 GPIO_SetBits(GPIOC,GPIO_Pin_5)
#define RGB4_1 GPIO_ResetBits(GPIOC,GPIO_Pin_5)
	
#define RGB5_0 GPIO_SetBits(GPIOB,GPIO_Pin_0)
#define RGB5_1 GPIO_ResetBits(GPIOB,GPIO_Pin_0)
	
#define RGB6_0 GPIO_SetBits(GPIOB,GPIO_Pin_1)
#define RGB6_1 GPIO_ResetBits(GPIOB,GPIO_Pin_1)

#define RGB7_0 GPIO_SetBits(GPIOB,GPIO_Pin_2)
#define RGB7_1 GPIO_ResetBits(GPIOB,GPIO_Pin_2)
	
#define RGB8_0 GPIO_SetBits(GPIOB,GPIO_Pin_10)
#define RGB8_1 GPIO_ResetBits(GPIOB,GPIO_Pin_10)
	
#define RGB9_0 GPIO_SetBits(GPIOB,GPIO_Pin_11)
#define RGB9_1 GPIO_ResetBits(GPIOB,GPIO_Pin_11)

#define Boost_OnOff_0 GPIO_SetBits(GPIOB,GPIO_Pin_9)
#define Boost_OnOff_1 GPIO_ResetBits(GPIOB,GPIO_Pin_9)



void RGB_Init(void);
void RGB_R(void);
void RGB_G(void);
void RGB_B(void);
void RGB_BG(void);
void RGB_RB(void);
void RGB_RG(void);
void RGB_OFF(void);
void RGB_ON(void);




#endif

