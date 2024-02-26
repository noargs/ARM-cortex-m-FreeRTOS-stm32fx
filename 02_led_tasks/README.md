## Exercise    
    
Toggle 3 LEDs of the STM32F407 DISC board with the duration as shown in the below graph.     
     
Create 3 FreeRTOS tasks of the same priority to handle three different LEDs   
     
		 
<img src="images/duration_graph.png" alt="Duration Graph" title="Duration Graph">  	 
     
      
There are 4 LEDs present on the board as shown below.      
		 
<img src="images/f407_leds.png" alt="STM32F407 on Board LEDs" title="STM32F407 on Board LEDs">       
		 
		 
<img src="images/outline.png" alt="Task outline" title="Task outline">    
    
    
    
## Incorporating FreeRTOS with HAL layer     
      
For FreeRTOS to work with HAL layer, We have to make few changes.   
   
Spare the SysTick as a TimeBase for FreeRTOS **only** as CubeMx HAL also used it. We can change the CubeMx HAL Timebase to any other timer i.e. TIMER6          
		 
		 
<img src="images/changes.png" alt="Change HAL Timebase" title="Change HAL Timebase">         
		 
		 
<img src="images/changes1.png" alt="Priority group settings, 4-bits pre-emption and 0 bits for subpriority" title="Priority group settings, 4-bits pre-emption and 0 bits for subpriority">    
		 
		 
<img src="images/changes2.png" alt="Disable code generation of SysTick, SVC, and PendSV handlers" title="Disable code generation of SysTick, SVC, and PendSV handlers">     
		 
		 
<img src="images/changes3.png" alt="Call vInitPrioGroupValue() from HAL_MspInit()" title="Call vInitPrioGroupValue() from HAL_MspInit()">    
		 
		 
<img src="images/task_states.png" alt="High level overview of Task States" title="High level overview of Task States">    
		 
		 
<img src="images/task_states2.png" alt="High level overview of Task States" title="High level overview of Task States">    
		 
		 
<img src="images/task_states3.png" alt="High level overview of Task States" title="High level overview of Task States">    
		 
		 
<img src="images/task_states4.png" alt="High level overview of Task States" title="High level overview of Task States">    
		 
		 
<img src="images/task_states5.png" alt="High level overview of Task States" title="High level overview of Task States">    
    
    
    
    
    
    
    
    
    
    
  
    
    
    
    
    
    
    
    

     
     

     
     

     
    
    