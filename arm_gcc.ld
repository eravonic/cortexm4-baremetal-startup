MEMORY
{
	FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x000FFFFF
	RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x0006FFFF
}

_ram_start = ORIGIN(RAM);

SECTIONS
{
	.text : 
	{
		*(.vectors)
		*(.text)
		_etext = .;
	} > flash
	
	
	.data : AT (_etext)
	{
		_sdata = .;
		*(.data)
		_edata = .;
	} > RAM
	
	.bss :
	{
		_sbss = .;
		*(.bss)
		_ebss = .;
	} > RAM
	
}