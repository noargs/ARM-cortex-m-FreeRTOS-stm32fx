## Exercise
     
		 
Write an application that creates 2 tasks, **Task-1** and **Task-2**, 
of equal priorities to print the message `'hello world from Task-x'`  
     
		 
<img src="images/task_handler.png" alt="Task Handler" title="Task Handler">  		
    
		
<img src="images/task_ready.png" alt="Task Ready FreeRTOS kernel list" title="Task Ready FreeRTOS kernel list">  			 
    
## Create a task    
     
<img src="images/task_create.png" alt="Task Create FreeRTOS Function API" title="Task Create FreeRTOS Function API">     
     
   
<img src="images/task_create2.png" alt="Task Create FreeRTOS Function API" title="Task Create FreeRTOS Function API">        
     
   
<img src="images/task_create3.png" alt="Task Create FreeRTOS Function API" title="Task Create FreeRTOS Function API">  
     
   
<img src="images/stack_operation_mode_mx_processor.png" alt="Stack Operation model of Mx processor" title="Stack Operation model of Mx processor">  	 	
    
		
## Task priorities in FreeRTOS   
     
<img src="images/task_prior.png" alt="Task priorities in FreeRTOS" title="Task priorities in FreeRTOS">  			 		 
    
		
## Scheduling policies in FreeRTOS   
     
<img src="images/sched_policy.png" alt="Scheduling policies in FreeRTOS" title="Scheduling policies in FreeRTOS">  			 		 
    
     
<img src="images/preempt_sched.png" alt="Pre-emptive Scheduling policy" title="Pre-emptive Scheduling policy"> 
    
     
<img src="images/preempt_round_robin.png" alt="Pre-emptive Scheduling Round robin" title="Pre-emptive Scheduling Round robin">   
    
     
<img src="images/preempt_prior_based.png" alt="Pre-emptive Scheduling Priority based" title="Pre-emptive Scheduling Priority based">    
    
     
<img src="images/coop_sched.png" alt="Co-operative Scheduling" title="Co-operative Scheduling">   
    
     
<img src="images/coop_sched2.png" alt="Co-operative Scheduling" title="Co-operative Scheduling">   		 		 
    
		
## What is SEGGER SystemView?  
     
<img src="images/segger_systemview.png" alt="What is SEGGER SystemView" title="What is SEGGER SystemView">  		
     
<img src="images/segger_systemview2.png" alt="What is SEGGER SystemView" title="What is SEGGER SystemView">  			
     
<img src="images/segger_systemview3.png" alt="What is SEGGER SystemView" title="What is SEGGER SystemView">  	 
    
		
## SEGGER SystemView Toolkit    
     
<img src="images/segger_toolkit.png" alt="SEGGER SystemView Toolkit" title="SEGGER SystemView Toolkit">  	
     
<img src="images/segger_toolkit2.png" alt="SEGGER SystemView Toolkit" title="SEGGER SystemView Toolkit">  		
     
<img src="images/segger_toolkit3.png" alt="SEGGER SystemView Toolkit" title="SEGGER SystemView Toolkit">  		
    
		
## SystemView Visualisation modes   
     
<img src="images/segger_recording.png" alt="SEGGER SystemView Visualisation modes  " title="SEGGER SystemView Visualisation modes">  	 
     
<img src="images/segger_recording2.png" alt="SEGGER SystemView Visualisation modes  " title="SEGGER SystemView Visualisation modes">  	 
     
<img src="images/segger_recording3.png" alt="SEGGER SystemView Visualisation modes  " title="SEGGER SystemView Visualisation modes">  	 
     
<img src="images/segger_recording4.png" alt="SEGGER SystemView Visualisation modes  " title="SEGGER SystemView Visualisation modes">  	
    
		
## SEGGER SystemView Integration  
     
<img src="images/systemview_integration1.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration2.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration3.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration4.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration5.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration6.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration7.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	 
     
<img src="images/systemview_integration8.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">  	  	 
     
<img src="images/systemview_integration9.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">   
    
		
> Run the `01_tasks` app in Debug mode, Hit `Resume` Button on IDE and then `Suspend` button after 2 seconds and will see following screen.
  	 
     
<img src="images/systemview_integration10.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">
 
    
		
> Write `SEGGER_RTT` in _Expressions_ window and go to `aUP[1] > pBuffer`, copy the address and paste it in `Memory Browser` window, click `binary icon` button and enter the values shown below and save the file with `.SVdat` extension
  	 
     
<img src="images/systemview_integration11.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">
 
    
		
> Finally open the file with `.SVdat` extension in SEGGER's SystemView
  	 
     
<img src="images/systemview_integration12.png" alt="SEGGER SystemView Integration Steps" title="SEGGER SystemView Integration Steps">    
  	 
     
<img src="images/idle_task.png" alt="IDLE Task" title="IDLE Task">     
  	 
     
<img src="images/idle_task2.png" alt="IDLE Task" title="IDLE Task">     
  	 
     
<img src="images/idle_task3.png" alt="IDLE Task" title="IDLE Task">    
  	 
     
<img src="images/idle_task4.png" alt="IDLE Task" title="IDLE Task">     
  	 
     
<img src="images/idle_task5.png" alt="IDLE Task" title="IDLE Task">      
  	 
     
<img src="images/freertos_sche.png" alt="IDLE Task" title="IDLE Task">     
  	 
     
<img src="images/freertos_sche2.png" alt="IDLE Task" title="IDLE Task">      
  	 
     
<img src="images/freertos_sche3.png" alt="IDLE Task" title="IDLE Task">       
  	 
     
<img src="images/freertos_sche4.png" alt="IDLE Task" title="IDLE Task">       
  	 
     
<img src="images/freertos_sche5.png" alt="IDLE Task" title="IDLE Task">    
    
		
<img src="images/freertos_kernel_interrupts.png" alt="FreeRTOS Kernel Innterrupts" title="FreeRTOS Kernel Innterrupts">   	    
    
		
<img src="images/rtos_tick.png" alt="RTOS Tick" title="RTOS Tick">  	   
    
		
<img src="images/rtos_tick2.png" alt="RTOS Tick" title="RTOS Tick">  	     
    
		
<img src="images/rtos_tick3.png" alt="RTOS Tick" title="RTOS Tick">  	   
    
		
<img src="images/rtos_tick4.png" alt="RTOS Tick" title="RTOS Tick">  	       
    
		
<img src="images/rtos_tick5.png" alt="RTOS Tick" title="RTOS Tick">  	   
    
		
<img src="images/rtos_tick6.png" alt="RTOS Tick" title="RTOS Tick">  	     
    
		
<img src="images/rtos_tick7.png" alt="RTOS Tick" title="RTOS Tick">  	      
    
		
<img src="images/rtos_tick8.png" alt="RTOS Tick" title="RTOS Tick">  	 	     
    
		
<img src="images/context_switching.png" alt="Context Switching" title="Context Switching">  	      
<img src="images/context_switching2.png" alt="Context Switching" title="Context Switching">  	   	      
<img src="images/task_state.png" alt="Task State" title="Task State">  
     
		 
<img src="images/task_state2.png" alt="Task State" title="Task State">  	
     
		 
<img src="images/task_switchingout.png" alt="Task switching out" title="Task switching out">  	  
     
		 
<img src="images/task_switchingout2.gif" alt="Task switching out" title="Task switching out">  	  
     
		 
<img src="images/task_switchingin.png" alt="Task switching In" title="Task switching In">  	    
     
		 
<img src="images/task_switchingin2.gif" alt="Task switching In" title="Task switching In">  	   
     
		 
<img src="images/task_switchingin3.png" alt="Task switching Assembly Overview" title="Task switching Assembly Overview">  	     
     
		 
<img src="images/cont_rec.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	   
     
		 
<img src="images/cont_rec2.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	   
     
		 
<img src="images/cont_rec3.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	  
     
		 
> Now, go to CUBEMx `01_tasks.ioc > Clock Configuration` and set the clock to Maximum allowed for STM32F407 which is HCLK (168Mhz), APB1 (42MHz), and APB2 (84MHz) as shown below.     
     
		 
<img src="images/cont_rec4.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	  
     
    
	
* Finally call `SEGGER_UART_init(500000)` with Baudrate as 500000 in `main.c`. We will use Co-operative scheduling therefore `configUSE_PREEMPTION` in `FreeRTOSConfig.h` should be **0**. Build/Debug the project into the MCU and Hit **Resume** to run the code. Now go to SystemView **Target** > **Recorder configuration**, Select **UART** from dropdown and give **COM Port** your USB-UART port name (as shown below) and **Speed (in Baud)** as `500000`. And lastly back to SystemView **Target** > **Start Recording**. 	   
     
		 
<img src="images/cont_rec5.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	  
    
		
* For some reason, if you would like to change the Main Clock frequency `HLCK` to let's say 50MHz as shown below then you have to make certain changes in `segger_uart.c`.     
     
		 
<img src="images/cont_rec6.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	   
    
		
		
* For HCLK at 50MHz, the APB1 will get 25MHz (as USART2 is hanging on APB1 bus). And we have to search in Reference Manual of STM32F407, the maximum baud we can achieve at 25MHz by visiting page **982** under heading **30.3.4 Fractional baud rate generation** as shown below  		
     
		 
<img src="images/cont_rec7.png" alt="Continuous recording (Real time)" title="Continuous recording (Real time)">  	   
    
     
    
				  
				        
				  
				     
				  
				     
				  
				     
				  
				  
				       
				  
				    
				  
				   

				
				  
				
				  
				
				
				
				  
				
				
     
				
      
				
       
				
      
				
     
				
      
				
     
				
     
     
				
     
     		 
     
     	
     	
     
     
    
			 		 
    
     
	 
  

  				 
     


		 
     
		   					 		 		 


			
			    
      
