int gboot_main()
{
    mmu_init();
    led_init();
    button_init();
    init_irq(); 
    
    while(1);
    
    return 0;    
}


