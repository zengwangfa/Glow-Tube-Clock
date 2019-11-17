// Created By 常曙&沉默的大树
// Last modified date: 2016-01-24
// Location: Chengdu

#include "pwm.h"
#include "sys.h"
#include "stm32f10x.h"
#include "HV57708.h"
#include "ds3231.h"
#include "delay.h"
#include "rgb.h"
#include "Neon.h"


u8 t=0;
u8 dis_data[]={2,5,6,3,3,3};
extern Time_Typedef TimeValue;
extern u8 Display_Time[8];

static u8 second_previous = 0;

	u16 led0pwmval=0;    
	u8 dir=1;	
int main(void)
{	
	delay_init();
	HV57708_Init(HV57708_MODE_NORMAL);
	IIC_GPIO_Config(); 
   RGB_Init();
	Neon_Init();
	Neon_Flip();
	RGB_B();
	
//	TIM3_PWM_Init(449,0);//不分频。PWM频率=72000/(899+1)=80Khz
//	TIM2_PWM_Init(899,0);
	
	TimeValue.year=DS3231_YEARDATA;
	TimeValue.month=0x05;
	TimeValue.week=0x07;
	TimeValue.date=0x28;
	TimeValue.hour=0x16;
	TimeValue.minute=0x53;
	TimeValue.second=0x20;

Time_Handle();
  second_previous = Display_Time[7] - 0x30;
	DS3231_Time_Init(&TimeValue);
    
	while(1)
		{
   	
//			delay_ms(10);	 
//		if(dir)led0pwmval++;
//		else led0pwmval--;	 
// 		if(led0pwmval>100)dir=0;
//		if(led0pwmval==0)dir=1;	   					 	   
//		
//		TIM_SetCompare4(TIM3,led0pwmval);	
//		TIM_SetCompare1(TIM3,led0pwmval);	   
//		TIM_SetCompare4(TIM2,led0pwmval);	
//			
			
       Time_Handle();
			
        dis_data[0] = Display_Time[0] - 0x30;//时
        dis_data[1] = Display_Time[1] - 0x30;//时
        dis_data[2] = Display_Time[3] - 0x30;//分
        dis_data[3] = Display_Time[4] - 0x30;//分
        dis_data[4] = Display_Time[6] - 0x30;//秒
        dis_data[5] = Display_Time[7] - 0x30;//秒
			
			
			
//			  dis_data[0] = Display_Date[2] - 0x30;//年
//        dis_data[1] = Display_Date[3] - 0x30;//年
//        dis_data[2] = Display_Date[5] - 0x30;//月
//        dis_data[3] = Display_Date[6] - 0x30;//月
//        dis_data[4] = Display_Date[8] - 0x30;//日
//        dis_data[5] = Display_Date[9] - 0x30;//日
		
				
        if(dis_data[5] != second_previous) 
				{
            second_previous = dis_data[5];
	       Neon_Flip();
        }
        SetDisplay(dis_data);
        Delay(500);
    }
	
	}

