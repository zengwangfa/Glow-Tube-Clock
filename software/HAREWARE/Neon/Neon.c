#include "Neon.h"
#include "stm32f10x.h"
#include <stdbool.h>

static bool Neon_status = 0;

void Neon_Init(void)
{
	GPIO_InitTypeDef GPIO_Initrespire;
	
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//GPIOA
	
	GPIO_Initrespire.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_Initrespire.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_9|GPIO_Pin_12|GPIO_Pin_10|GPIO_Pin_11;
	GPIO_Initrespire.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_Initrespire);
	
	 Neon_status = 0;
   Neon1_1 ;//Ï¨Ãð
	 Neon2_1 ;
	 Neon3_1 ;
	 Neon4_1 ;

}

void Neon_Flip(void) 
{
    Neon_status = !Neon_status;
    if(Neon_status == 1) 
		{
      
			 Neon1_1 ;//Ï¨Ãð
			 Neon2_1 ;
			 Neon3_1 ;
			 Neon4_1 ;
			
    }
			else 
		{
        Neon1_0 ;//µãÁÁ
	      Neon2_0 ;
	      Neon3_0 ;
	      Neon4_0 ;
    }
}

