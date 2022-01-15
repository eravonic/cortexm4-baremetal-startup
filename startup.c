#include <stdint.h>

extern int main();
void reset_handler();
void default_handler();

extern uint32_t _stext;
extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;


#define STACK_TOP	0x20017FFF

uint32_t _vectors[] __attribute__ ((section(".vectors"))) = {
	
	// processor exceptions
	(uint32_t)STACK_TOP,							 // stack top
	(uint32_t)&reset_handler,						 // reset handler
    (uint32_t)&default_handler,    //	NMI_Handler
	(uint32_t)&default_handler,    //	HardFault_Handler
	(uint32_t)&default_handler,    //	MemManage_Handler
	(uint32_t)&default_handler,    //	BusFault_Handler
	(uint32_t)&default_handler,    //	UsageFault_Handler
	0,
	0,
	0,
	0,
	(uint32_t)&default_handler,    //	SVC_Handler
	(uint32_t)&default_handler,    //	DebugMon_Handler
	0,
	(uint32_t)&default_handler,    //	PendSV_Handler
	(uint32_t)&default_handler,    //	SysTick_Handler
	
	// interrupts
	(uint32_t)&default_handler,    //	WWDG_IRQHandler
	(uint32_t)&default_handler,    //	PVD_PVM_IRQHandler
	(uint32_t)&default_handler,    //	TAMP_STAMP_IRQHandler
	(uint32_t)&default_handler,    //	RTC_WKUP_IRQHandler
	(uint32_t)&default_handler,    //	FLASH_IRQHandler
	(uint32_t)&default_handler,    //	RCC_IRQHandler
	(uint32_t)&default_handler,    //	EXTI0_IRQHandler
	(uint32_t)&default_handler,    //	EXTI1_IRQHandler
	(uint32_t)&default_handler,    //	EXTI2_IRQHandler
	(uint32_t)&default_handler,    //	EXTI3_IRQHandler
	(uint32_t)&default_handler,    //	EXTI4_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel1_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel2_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel3_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel4_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel5_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel6_IRQHandler
	(uint32_t)&default_handler,    //	DMA1_Channel7_IRQHandler
	(uint32_t)&default_handler,    //	ADC1_2_IRQHandler
	(uint32_t)&default_handler,    //	CAN1_TX_IRQHandler
	(uint32_t)&default_handler,    //	CAN1_RX0_IRQHandler
	(uint32_t)&default_handler,    //	CAN1_RX1_IRQHandler
	(uint32_t)&default_handler,    //	CAN1_SCE_IRQHandler
	(uint32_t)&default_handler,    //	EXTI9_5_IRQHandler
	(uint32_t)&default_handler,    //	TIM1_BRK_TIM15_IRQHandler
	(uint32_t)&default_handler,    //	TIM1_UP_TIM16_IRQHandler
	(uint32_t)&default_handler,    //	TIM1_TRG_COM_TIM17_IRQHandler
	(uint32_t)&default_handler,    //	TIM1_CC_IRQHandler
	(uint32_t)&default_handler,    //	TIM2_IRQHandler
	(uint32_t)&default_handler,    //	TIM3_IRQHandler
	(uint32_t)&default_handler,    //	TIM4_IRQHandler
	(uint32_t)&default_handler,    //	I2C1_EV_IRQHandler
	(uint32_t)&default_handler,    //	I2C1_ER_IRQHandler
	(uint32_t)&default_handler,    //	I2C2_EV_IRQHandler
	(uint32_t)&default_handler,    //	I2C2_ER_IRQHandler
	(uint32_t)&default_handler,    //	SPI1_IRQHandler
	(uint32_t)&default_handler,    //	SPI2_IRQHandler
	(uint32_t)&default_handler,    //	USART1_IRQHandler
	(uint32_t)&default_handler,    //	USART2_IRQHandler
	(uint32_t)&default_handler,    //	USART3_IRQHandler
	(uint32_t)&default_handler,    //	EXTI15_10_IRQHandler
	(uint32_t)&default_handler,    //	RTC_Alarm_IRQHandler
	(uint32_t)&default_handler,    //	DFSDM1_FLT3_IRQHandler
	(uint32_t)&default_handler,    //	TIM8_BRK_IRQHandler
	(uint32_t)&default_handler,    //	TIM8_UP_IRQHandler
	(uint32_t)&default_handler,    //	TIM8_TRG_COM_IRQHandler
	(uint32_t)&default_handler,    //	TIM8_CC_IRQHandler
	(uint32_t)&default_handler,    //	ADC3_IRQHandler
	(uint32_t)&default_handler,    //	FMC_IRQHandler
	(uint32_t)&default_handler,    //	SDMMC1_IRQHandler
	(uint32_t)&default_handler,    //	TIM5_IRQHandler
	(uint32_t)&default_handler,    //	SPI3_IRQHandler
	(uint32_t)&default_handler,    //	UART4_IRQHandler
	(uint32_t)&default_handler,    //	UART5_IRQHandler
	(uint32_t)&default_handler,    //	TIM6_DAC_IRQHandler
	(uint32_t)&default_handler,    //	TIM7_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel1_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel2_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel3_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel4_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel5_IRQHandler
	(uint32_t)&default_handler,    //	DFSDM1_FLT0_IRQHandler
	(uint32_t)&default_handler,    //	DFSDM1_FLT1_IRQHandler
	(uint32_t)&default_handler,    //	DFSDM1_FLT2_IRQHandler
	(uint32_t)&default_handler,    //	COMP_IRQHandler
	(uint32_t)&default_handler,    //	LPTIM1_IRQHandler
	(uint32_t)&default_handler,    //	LPTIM2_IRQHandler
	(uint32_t)&default_handler,    //	OTG_FS_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel6_IRQHandler
	(uint32_t)&default_handler,    //	DMA2_Channel7_IRQHandler
	(uint32_t)&default_handler,    //	LPUART1_IRQHandler
	(uint32_t)&default_handler,    //	QUADSPI_IRQHandler
	(uint32_t)&default_handler,    //	I2C3_EV_IRQHandler
	(uint32_t)&default_handler,    //	I2C3_ER_IRQHandler
	(uint32_t)&default_handler,    //	SAI1_IRQHandler
	(uint32_t)&default_handler,    //	SAI2_IRQHandler
	(uint32_t)&default_handler,    //	SWPMI1_IRQHandler
	(uint32_t)&default_handler,    //	TSC_IRQHandler
	(uint32_t)&default_handler,    //	LCD_IRQHandler
	0,
	(uint32_t)&default_handler,    //	RNG_IRQHandler
	(uint32_t)&default_handler 	   //	FPU_IRQHandler

};

void reset_handler()
{
	// copy .data from flash to ram
	uint32_t* psrc = &_etext;
	uint32_t* pdest = &_sdata;
	
	while (pdest < &_edata) {
		*pdest = *psrc;
		++psrc; 
		++pdest;
	}
	
	
	// zero-out .bss section
	pdest = &_sbss;
	while (pdest < &_ebss)
	{
		*pdest = 0x0;
		++pdest;
	}
	
	// call main
	main();
}

void default_handler()
{
	while(1) {
		;
	}
}




