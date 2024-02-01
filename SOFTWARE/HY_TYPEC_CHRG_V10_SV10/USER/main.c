/*******************************************************************************
* @file     main.c                                                               
* @brief    ������                                                   
* @author   xxxlzjxxx                                                          
* @version  V1.0                                                              
* @date     2018-08-02                                                        
* @license  GNU General Public License (GPL)                                                                                                               
*******************************************************************************/
#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "oled.h"
#include "usmart.h"
#include "adc.h"

u16 adcx;
float USB_CURR,USB_VOLT,USB_WATT;
float BAT_CURR,BAT_VOLT,BAT_WATT;

void oled_task(void);

int main(void)
{	
 	u8 t = 0;
//	u16 i = 99;
 
	delay_init();	     //��ʱ��ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
    LED_Init();
	Adc_Init();
    delay_ms(1000);
    LED0 = !LED0;
	OLED_Init();			//��ʼ��OLED
	usmart_dev.init(72);	//��ʼ��USMART	

	OLED_ShowString(0,0,"USB:",16);
    OLED_ShowString(30,52,"V",12);
    OLED_ShowString(73,52,"A",12);
    OLED_ShowString(122,52,"W",12);
	OLED_ShowString(0,34,"BAT:",16);
    OLED_ShowString(30,18,"V",12);
    OLED_ShowString(73,18,"A",12);
    OLED_ShowString(122,18,"W",12);

	while(1){		  
		delay_ms(10);
		oled_task();
        
        t++;
        if(t >= 5){
            LED0 = !LED0;
            t = 0;
        }
	}	  
}
/*******************************************************************************
* @param		����
* @brief		ժҪ
* @arg			�б�˵������
* @return       ����ֵ˵��
* @retval		����ֵ����˵��
* @see			�ο�
* @attention	ע��
* @note			ע��	
* @author   	����                                                                                                       *                                                            
* @date     	����            				
*******************************************************************************/
void oled_task(void){
    char aa[6];	
//display BAT_VOLT    
	adcx = Get_Adc_Average(ADC_Channel_0,20);
    BAT_VOLT=(float)adcx*(3.34/4096)*2;//ʵ�ʵ�ѹֵ
    BAT_WATT= BAT_VOLT;
    sprintf(aa,"%2.2f",BAT_VOLT);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(0,52,(u8 *)aa,12);	
//display BAT_CURR    
	adcx = Get_Adc_Average(ADC_Channel_1,20);
    BAT_CURR = (float)adcx*3.34/4096;
    if(BAT_CURR >= 1.67){
        BAT_CURR=(BAT_CURR - 1.67) * 1000 / 132;
    }
    else{
        BAT_CURR=(1.67 - BAT_CURR) * 1000 / 132;
    }
    sprintf(aa,"%2.2f",BAT_CURR);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(43,52,(u8 *)aa,12);		
//display BAT_WATT    
	BAT_WATT = BAT_WATT * BAT_CURR;
    sprintf(aa,"%2.2f",BAT_WATT);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(92,52,(u8 *)aa,12);
    
//display USB_VOLT    
	adcx = Get_Adc_Average(ADC_Channel_3,20);
    USB_VOLT=(float)adcx*(3.34/4096)*4;//ʵ�ʵ�ѹֵ
    USB_WATT= USB_VOLT;
    sprintf(aa,"%2.2f",USB_VOLT);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(0,18,(u8 *)aa,12);	
//display USB_CURR    
	adcx = Get_Adc_Average(ADC_Channel_2,20);
    USB_CURR = (float)adcx*3.34/4096;
    if(USB_CURR >= 1.67){
        USB_CURR=(USB_CURR - 1.67) * 1000 / 132;
    }
    else{
        USB_CURR=(1.67 - USB_CURR) * 1000 / 132;
    }
    sprintf(aa,"%2.2f",USB_CURR);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(43,18,(u8 *)aa,12);		
//display BAT_WATT    
	USB_WATT = USB_WATT * USB_CURR;
    sprintf(aa,"%2.2f",USB_WATT);//����������תΪָ����ʽ���ַ���
    OLED_ShowString(92,18,(u8 *)aa,12);

	
	OLED_Refresh_Gram();//������ʾ��OLED
}



