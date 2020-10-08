#define GPFCON (volatile unsigned long*)0x56000050
#define GPFDAT (volatile unsigned long*)0x56000054

void led_init()
{   
    *(GPFCON) = 0x1500;
}

void led_off()
{
    *(GPFDAT) = 0x8f;
}

void led_on()
{
    *(GPFDAT) = 0xaf;
}
