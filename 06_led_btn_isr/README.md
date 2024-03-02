    
		
<img src="images/prior.png" alt="RTOS vs Hardware priority" title="RTOS vs Hardware priority">          
		
<img src="images/prior2.png" alt="RTOS vs Hardware priority" title="RTOS vs Hardware priority">          
		
<img src="images/prior3.png" alt="RTOS vs Hardware priority" title="RTOS vs Hardware priority">             
      
			

## Exercise   
     
ISR to Task notification using direct notification APIs of FreeRTOS    
    
* Create 3 tasks that toggle 3 different LEDs of the STM32F407 DISC    
    
* When user presses the button, the button interrupt handler must run, and it should send notification to the current LED toggling task    
    
* When LED toggling task receives the notification, it should detele itself     
     
		 
<img src="images/exercise.png" alt="Exercise" title="Exercise">  		 
		   
    
* Don't forget to follow the [4 steps](https://github.com/noargs/ARM-cortex-m-FreeRTOS-stm32fx/tree/main/02_led_tasks#incorporating-freertos-with-hal-layer) to make FreeRTOS compatible with HAL layer.   
    
* HCLK should raise upto 168MHz to work with `segger_uart.c` in case, we wish to get Continuous (Realtime) Recording	  	 
		   
    
* keep the `EXTI0` Interrupt priority lesser than `configMAX_SYSCALL_INTERRUPT_PRIORITY 0x50` i.e. between 0x50 to 0xF0 as shown below.    
     
		 
<img src="images/prior4.png" alt="EXTI line0 priority" title="EXTI line0 priority">  		 
     
		 
<img src="images/prior5.png" alt="External Interrupt Mode with Falling edge trigger detection" title="External Interrupt Mode with Falling edge trigger detection">  		    
     
		 
> [**xTaskNotifyFromISR()**](https://www.freertos.org/xTaskNotifyFromISR.html)     
     
		  
			
			 
### xTaskNotifyFromISR()       
      
task.h     
     
```
BaseType_t xTaskNotifyFromISR( TaskHandle_t xTaskToNotify,
                                uint32_t ulValue,
                                eNotifyAction eAction,
                                BaseType_t *pxHigherPriorityTaskWoken );
```																		 			
     		 		 
> [!NOTE]
> **pxHigherPriorityTaskWoken** _*pxHigherPriorityTaskWoken_ must be initialised to 0. 
> xTaskNotifyFromISR() will set *pxHigherPriorityTaskWoken to pdTRUE if sending the notification caused a task to unblock, and the unblocked task has a priority higher than the currently running task.
> If xTaskNotifyFromISR() sets this value to pdTRUE then a context switch should be requested before the interrupt is exited.     
> pxHigherPriorityTaskWoken is an optional parameter and can be set to NULL     
     
		  
			
			 
### traceISR_ENTER() and traceISR_EXIT()     
     
Helps **SEGGER SystemView** to detect the Entry to an interrupt, otherwise SEGGER SystemView will have no idea that there was an execution of interrupt handler		    
     
		  
			
			 
### portENTER_CRITICAL() and portEXIT_CRITICAL()     
     
Cannot use `vTaskSuspendAll()` here now as `next_task_handle` is shared between Interrupt handler `button_interrupt_handler(void)` as well as FreeRTOS Task handlers.   
    
Whenever you have a critical section (i.e. where global variable is accessed which is shared between multiple tasks and interrupt handler). There you can disable the interrupts of the system, _okay for short duration_ but not recommended to disable interrupts for longer duration, In that case you can switch to mutex or semaphores for synchronisation between different tasks and interrupt handler.   
    
It also disable the PendSV (prority 0xf0), only interrupts with less than 0x50 (high priority urgeny interrupts from 0x00 to 0x40) are allowed but not greater than 0x50 (low urgency low priority from 0x50 to 0xF0)		 
      
    

			
	 		 

         
		 
           
		 
     
		  	 						 		 
		     
		 
	
    
    
    
    
    
    
    
    
    
  
    
    
    
    
    
    
    
    

     
     

     
     

     
    
    