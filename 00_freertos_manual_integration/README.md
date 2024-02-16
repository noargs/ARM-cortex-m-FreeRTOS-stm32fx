## FreeRTOS Manual Integration without CMSIS-RTOS Layer
     
		 
* Create a project as **New > STM32 Project**    
     
* Choose **STM32Cube** instead of _Empty_ project    
     
* Choose **No** to _Initialise all peripherals with the default Mode_		
    
* We will manually intergrate the FreeRTOS into **STM32Cube** project as shown below.   
      
<img src="images/manual_integration.png" alt="Manual Integration without CMSIS-RTOS Layer" title="Manual Integration without CMSIS-RTOS Layer">   
    
* We will not configure FreeRTOS from CubeMX GUI as sometime later we may end up using different IDE/MCU.   
    
<img src="images/cubemx_rtos_intergration.png" alt="RTOS Intergration through CubeMX" title="RTOS Intergration through CubeMX">    
    
* We will not use CMSIS RTOS layer (And call FreeRTOS APIs directly from Application Layer). However the benefit of using CMSIS RTOS layer incase we end up using different RTOS in the future. We don't have to change our Application layer API's alot if we use CMSIS RTOS layer.				
    
<img src="images/cmsis_rtos_layer_benefit.png" alt="Benefit of using CMSIS RTOS layer" title="Benefit of using CMSIS RTOS layer">   	
     
		 
* If we were to use CMSIS RTOS layer, Image below shows the typical workflow of calling CMSIS RTOS layer from Application Layer which will in turn invoke RTOS Layer API (i.e. in our case FreeRTOS). 		   
     
<img src="images/cmsis_rtos_workflow.png" alt="Typical CMSIS RTOS layer workflow" title="Typical CMSIS RTOS layer workflow"> 	
    
     
* Our project layer will look like as following without CMSIS-RTOS Layer
     
<img src="images/our_project_workflow.png" alt="Our Project workflow without CMSIS-RTOS layer" title="Our Project workflow without CMSIS-RTOS layer"> 			 		 			 	




		 
     
		   					 		 		 


			
			    
      
