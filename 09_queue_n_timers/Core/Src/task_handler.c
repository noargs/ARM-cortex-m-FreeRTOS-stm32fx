#include "main.h"

int extract_command(command_t* cmd);
void process_command(command_t* cmd);

void menu_task_handler(void* param)
{
  while (1)
  {

  }
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

