#include "main.h"

int extract_command(command_t* cmd);
void process_command(command_t* cmd);

const char* msg_invalid = "/////Invalid option/////\n";

void menu_task_handler(void* param)
{
  uint32_t cmd_addr;
  command_t *cmd;
  int option;
  const char* msg_menu = "========================\n"
	                     "|          Menu        |\n"
	                     "========================\n"
	                     "LED effect    ----> 0 \n"
	                     "Date and time ----> 1 \n"
	                     "Exit          ----> 2 \n"
	                     "Enter your choice here: ";

  while (1)
  {
	xQueueSend(q_print, &msg_menu, portMAX_DELAY);

	// wait for menu commands
	xTaskNotifyWait(0, 0, &cmd_addr, portMAX_DELAY);
	cmd = (command_t*)cmd_addr;

	if (cmd->len == 1)
	{
	  option = cmd->payload[0] - 48;  // converting ASCII to number
	  switch (option)
	  {
	  case 0:
		curr_state = sLedEffect;
		xTaskNotify(handle_led_task, 0, eNoAction);
		break;
	  case 1:
		curr_state = sRtcMenu;
		xTaskNotify(handle_rtc_task, 0, eNoAction);
		break;
	  case 2: // implement exit
		break;
	  default:
		xQueueSend(q_print, &msg_invalid, portMAX_DELAY);
		continue; // continue to wait for the command
	  }
	}
	else
	{
	  // invalid entry
	  xQueueSend(q_print, &msg_invalid, portMAX_DELAY);
	}
	// wait to run again when some other task notifies
	xTaskNotifyWait(0, 0, NULL, portMAX_DELAY);
  } // end-while
}

void led_task_handler(void* param)
{
  while (1)
  {

  }
}

void rtc_task_handler(void* param)
{
  while (1)
  {

  }
}

void print_task_handler(void* param)
{
  while (1)
  {

  }
}

void cmd_task_handler(void* param)
{
  BaseType_t ret;
  command_t cmd;

  while (1)
  {
	// implement notify wait as this task runs when the scheduler has been launched. nothing to do hence wait
	ret = xTaskNotifyWait(0, 0, NULL, portMAX_DELAY);

	if (ret == pdTRUE)
	{
	  // process the user data (commands) stored in the input data queue
	  process_command(&cmd);
	}
  }
}

void process_command(command_t* cmd)
{
  extract_command(cmd);

  switch (curr_state)
  {
  case sMainMenu:
	/* notify the menu_task_handler with the command */
	xTaskNotify(handle_menu_task, (uint32_t)cmd, eSetValueWithOverwrite);
	break;
  case sLedEffect:
	/* notify led_task_handler with the command */
	xTaskNotify(handle_led_task, (uint32_t)cmd, eSetValueWithOverwrite);
	break;
  case sRtcMenu:
  case sRtcTimeConfig:
  case sRtcDateConfig:
  case sRtcReport:
	/* notify RTC task with the command */
	xTaskNotify(handle_rtc_task, (uint32_t)cmd, eSetValueWithOverwrite);
	break;
  }
}

int extract_command(command_t* cmd)
{
  uint8_t item;
  BaseType_t status;

  status = uxQueueMessagesWaiting(q_data);
  if (!status) return -1;
  uint8_t i =0;
  do
  {
	status = xQueueReceive(q_data, &item, 0);
	if (status==pdTRUE) cmd->payload[i++] = item;
  } while (item != '\n');

  cmd->payload[i-1] = '\0';
  cmd->len = i-1; /* save length of the command excluding null char */

  return 0;
}

