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


#define STACK_TOP	0x2006FFFF

uint32_t _vectors[] __attribute__ ((section(".vectors"))) = {
	
	// processor exceptions
	(uint32_t)STACK_TOP,							 // stack top
	(uint32_t)&reset_handler,						 // reset handler
    (uint32_t)&default_handler,               		 // The NMI handler
    (uint32_t)&default_handler,                		 // The hard fault handler
    (uint32_t)&default_handler,             		 // The MPU fault handler
    (uint32_t)&default_handler,             		 // The bus fault handler
    (uint32_t)&default_handler,             		 // The usage fault handler
    0,                                      		 // Reserved
    0,                                      		 // Reserved
    0,                                      		 // Reserved
    0,                                      		 // Reserved
    (uint32_t)&default_handler,             	     // SVCall handler
    (uint32_t)&default_handler,            			 // Debug monitor handler
    0,                                      		 // Reserved
    (uint32_t)&default_handler,          		     // The PendSV handler
    (uint32_t)&default_handler,           			 // The SysTick handler
	
	// interrupts
    (uint32_t)&default_handler,                      // GPIO Port A
    (uint32_t)&default_handler,                      // GPIO Port B
    (uint32_t)&default_handler,                      // GPIO Port C
    (uint32_t)&default_handler,                      // GPIO Port D
    (uint32_t)&default_handler,                      // GPIO Port E
    (uint32_t)&default_handler,                      // UART0 Rx and Tx
    (uint32_t)&default_handler,                      // UART1 Rx and Tx
    (uint32_t)&default_handler,                      // SSI0 Rx and Tx
    (uint32_t)&default_handler,                      // I2C0 Master and Slave
    (uint32_t)&default_handler,                      // PWM Fault
    (uint32_t)&default_handler,                      // PWM Generator 0
    (uint32_t)&default_handler,                      // PWM Generator 1
    (uint32_t)&default_handler,                      // PWM Generator 2
    (uint32_t)&default_handler,                      // Quadrature Encoder 0
    (uint32_t)&default_handler,                      // ADC Sequence 0
    (uint32_t)&default_handler,                      // ADC Sequence 1
    (uint32_t)&default_handler,                      // ADC Sequence 2
    (uint32_t)&default_handler,                      // ADC Sequence 3
    (uint32_t)&default_handler,                      // Watchdog timer
    (uint32_t)&default_handler,                      // Timer 0 subtimer A
    (uint32_t)&default_handler,                      // Timer 0 subtimer B
    (uint32_t)&default_handler,                      // Timer 1 subtimer A
    (uint32_t)&default_handler,                      // Timer 1 subtimer B
    (uint32_t)&default_handler,                      // Timer 2 subtimer A
    (uint32_t)&default_handler,                      // Timer 2 subtimer B
    (uint32_t)&default_handler,                      // Analog Comparator 0
    (uint32_t)&default_handler,                      // Analog Comparator 1
    (uint32_t)&default_handler,                      // Analog Comparator 2
    (uint32_t)&default_handler,                      // System Control (PLL, OSC, BO)
    (uint32_t)&default_handler,                      // FLASH Control
    (uint32_t)&default_handler,                      // GPIO Port F
    (uint32_t)&default_handler,                      // GPIO Port G
    (uint32_t)&default_handler,                      // GPIO Port H
    (uint32_t)&default_handler,                      // UART2 Rx and Tx
    (uint32_t)&default_handler,                      // SSI1 Rx and Tx
    (uint32_t)&default_handler,                      // Timer 3 subtimer A
    (uint32_t)&default_handler,                      // Timer 3 subtimer B
    (uint32_t)&default_handler,                      // I2C1 Master and Slave
    (uint32_t)&default_handler,                      // CAN0
    (uint32_t)&default_handler,                      // CAN1
    (uint32_t)&default_handler,               		 // Ethernet
    (uint32_t)&default_handler,                      // Hibernate
    (uint32_t)&default_handler,                      // USB0
    (uint32_t)&default_handler,                      // PWM Generator 3
    (uint32_t)&default_handler,                      // uDMA Software Transfer
    (uint32_t)&default_handler,                      // uDMA Error
    (uint32_t)&default_handler,                      // ADC1 Sequence 0
    (uint32_t)&default_handler,                      // ADC1 Sequence 1
    (uint32_t)&default_handler,                      // ADC1 Sequence 2
    (uint32_t)&default_handler,                      // ADC1 Sequence 3
    (uint32_t)&default_handler,                      // External Bus Interface 0
    (uint32_t)&default_handler,                      // GPIO Port J
    (uint32_t)&default_handler,                      // GPIO Port K
    (uint32_t)&default_handler,                      // GPIO Port L
    (uint32_t)&default_handler,                      // SSI2 Rx and Tx
    (uint32_t)&default_handler,                      // SSI3 Rx and Tx
    (uint32_t)&default_handler,                      // UART3 Rx and Tx
    (uint32_t)&default_handler,                      // UART4 Rx and Tx
    (uint32_t)&default_handler,                      // UART5 Rx and Tx
    (uint32_t)&default_handler,                      // UART6 Rx and Tx
    (uint32_t)&default_handler,                      // UART7 Rx and Tx
    (uint32_t)&default_handler,                      // I2C2 Master and Slave
    (uint32_t)&default_handler,                      // I2C3 Master and Slave
    (uint32_t)&default_handler,                      // Timer 4 subtimer A
    (uint32_t)&default_handler,                      // Timer 4 subtimer B
    (uint32_t)&default_handler,                      // Timer 5 subtimer A
    (uint32_t)&default_handler,                      // Timer 5 subtimer B
    (uint32_t)&default_handler,                      // FPU
    0,                                     			 // Reserved
    0,                                     			 // Reserved
    (uint32_t)&default_handler,                      // I2C4 Master and Slave
    (uint32_t)&default_handler,                      // I2C5 Master and Slave
    (uint32_t)&default_handler,                      // GPIO Port M
    (uint32_t)&default_handler,                      // GPIO Port N
    0,                                     			 // Reserved
    (uint32_t)&default_handler,                      // Tamper
    (uint32_t)&default_handler,                      // GPIO Port P (Summary or P0)
    (uint32_t)&default_handler,                      // GPIO Port P1
    (uint32_t)&default_handler,                      // GPIO Port P2
    (uint32_t)&default_handler,                      // GPIO Port P3
    (uint32_t)&default_handler,                      // GPIO Port P4
    (uint32_t)&default_handler,                      // GPIO Port P5
    (uint32_t)&default_handler,                      // GPIO Port P6
    (uint32_t)&default_handler,                      // GPIO Port P7
    (uint32_t)&default_handler,                      // GPIO Port Q (Summary or Q0)
    (uint32_t)&default_handler,                      // GPIO Port Q1
    (uint32_t)&default_handler,                      // GPIO Port Q2
    (uint32_t)&default_handler,                      // GPIO Port Q3
    (uint32_t)&default_handler,                      // GPIO Port Q4
    (uint32_t)&default_handler,                      // GPIO Port Q5
    (uint32_t)&default_handler,                      // GPIO Port Q6
    (uint32_t)&default_handler,                      // GPIO Port Q7
    (uint32_t)&default_handler,                      // GPIO Port R
    (uint32_t)&default_handler,                      // GPIO Port S
    (uint32_t)&default_handler,                      // SHA/MD5 0
    (uint32_t)&default_handler,                      // AES 0
    (uint32_t)&default_handler,                      // DES3DES 0
    (uint32_t)&default_handler,                      // LCD Controller 0
    (uint32_t)&default_handler,                      // Timer 6 subtimer A
    (uint32_t)&default_handler,                      // Timer 6 subtimer B
    (uint32_t)&default_handler,                      // Timer 7 subtimer A
    (uint32_t)&default_handler,                      // Timer 7 subtimer B
    (uint32_t)&default_handler,                      // I2C6 Master and Slave
    (uint32_t)&default_handler,                      // I2C7 Master and Slave
    (uint32_t)&default_handler,                      // HIM Scan Matrix Keyboard 0
    (uint32_t)&default_handler,                      // One Wire 0
    (uint32_t)&default_handler,                      // HIM PS/2 0
    (uint32_t)&default_handler,                      // HIM LED Sequencer 0
    (uint32_t)&default_handler,                      // HIM Consumer IR 0
    (uint32_t)&default_handler,                      // I2C8 Master and Slave
    (uint32_t)&default_handler,                      // I2C9 Master and Slave
    (uint32_t)&default_handler                       // GPIO Port T
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




