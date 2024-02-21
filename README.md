## ARM Cortex M FreeRTOS on STM32Fx

           
[Download](https://github.com/FreeRTOS/FreeRTOS/releases/download/202012.00/FreeRTOSv202012.00.zip)  FreeRTOSv202012.00 on GitHub    
    
		
		
## Development Board used  
     
		 
<img src="images/dev_board.png" alt="IDLE Task" title="IDLE Task">  		 		
     
		 
## What is Real Time Application (RTA)?     
     
		 		 
**What are the truths and myths related to the word of real time computing.**    
     
* The **myth** is the Real time computing is equivalent to fast computing, but the **truth** is the Real time computing is equivalent to predictable computing.     
     
		 
* The word real time signifies that, the application or the operating system deals with guarantees (_not with promises_), not with just the raw part of the system.   
     
		 
* Whenever we say something is real time, then the timeliness is more important. It promises to meet its deadline for a given timeline instead of just talking about raw speed.

> The application developers who think they need a real time system for better performance of their application can actually get the performance they require by simply upgrading their hardware with faster processors, RAM, high speed buses, etc.    
     
* A Real time system is one in which the correctness of the computations not only depends upon the logical correctness of the computation, but also upon the time at which the result is produced. If the time constraints are not met, system failure is said to have occurred.    
     
<img src="images/rta_graph.png" alt="Non ReatTime Vs RealTime" title="Non ReatTime Vs RealTime"> 		
    
		
For example, Above graph has red line indicates that it is a non real time application (_NRTA_) and pink line indicates a real time application (RTA). This graph shows execution iterations versus response time.    
      
Here you can see, during multiple iterations the execution time or the response time of a real time application (_RTA_) is almost constant. It is roughly taking around 2.5 seconds for every iteration.  
    
However a non real time application (_NRTA_), response time is varies. For the first iteration it took 4 seconds and then 1.5, 2.5 and finally 4 seconds. It doesn't meet the timeliness behaviour.

You cannot trust this application, as it's response time is keep on varying between different iterations. On the other hand, a real time application promises a fairly constant response time, no matter in which constraint you execute that application.   
    
		
<img src="images/rta_app.png" alt="Real time application" title="Real time application">    
     
	
For example, the airbag triggering mechanism in a car is an example of **hard real time** function. The air bag must be deployed within a given time limit of an impact. A response falling outside of this time limit can result in the driver sustaining injuries that could otherwise have been avoided.   
    
<img src="images/hard_rta.png" alt="Real time application" title="Real time application">   
     
		 
**Soft real time** requirements are those that state time deadline, but breaching the deadline would not render the system useless. There could be a small deviation in terms of milliseconds or seconds, in terms of response time of a soft real time requirements. So, they are not strict as hard real time systems.    
     
		 
<img src="images/rta_examples.png" alt="Examples of RTAs" title="Examples of RTAs">    
     
		 
<img src="images/rta_os.png" alt="RealTime Operating System" title="RealTime Operating System">   
     
		 
<img src="images/rtosvsgpos.png" alt="RTOS vs GPOS" title="RTOS vs GPOS">   
     
		 
<img src="images/embeddedos.png" alt="RTOS vs GPOS" title="RTOS vs GPOS">   	 		
     
		 
## Task Scheduling?  
     
		 
<img src="images/gpos_task_sched.png" alt="GPOS Task Scheduling" title="GPOS Task Scheduling">     
		 
<img src="images/rtos_task_sched.png" alt="GPOS Task Scheduling" title="RTOS Task Scheduling">   
		 
<img src="images/rtosvsgpos_tasksched.png" alt="RTOS vs GPOS Task Scheduling" title="RTOS vs GPOS Task Scheduling">    
     
		 
		 
     
		 
		 
      
			
			
     
		 
		 		 		 

     
