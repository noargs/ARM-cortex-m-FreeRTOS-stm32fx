Find the explanation of **vTaskDelayUntil()** in the previous project's README [03_led_block_task](https://github.com/noargs/ARM-cortex-m-FreeRTOS-stm32fx/tree/main/03_led_block_tasks#readme)     
    
		
		
		 
## Exercise   
     
* Toggle 3 LEDs of the STM32F407 DISC board with the duration as shown in the below graph.    
    
* Create 3 FreeRTOS tasks of the same priority to handle 3 different LEDs    
    
* Use **vTaskDelayUntil()** for delay implementation    
    
>	`#define INCLUDE_vTaskDelayUntil	1` must be in the project specific file `FreeRTOSConfig.h` to use **vTaskDelayUntil()** API   
   
* Don't forget to follow the [4 steps](https://github.com/noargs/ARM-cortex-m-FreeRTOS-stm32fx/tree/main/02_led_tasks#incorporating-freertos-with-hal-layer) to make FreeRTOS compatible with HAL layer.   
    
* HCLK should raise upto 168MHz to work with `segger_uart.c` in case, we wish to get Continuous (Realtime) Recording	  
		 
		 
<img src="images/exercise_4.png" alt="Exercise 4" title="Exercise 4">         
		 
     
		  	 						 		 
		     
		 
	
    
    
    
    
    
    
    
    
    
  
    
    
    
    
    
    
    
    

     
     

     
     

     
    
    