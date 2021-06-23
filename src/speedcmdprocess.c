#include <stdbool.h>
#include "speedcmdprocess.h"

bool UARTTakeOffCmdReceived = false;


UARTSpeedCmdErrorType UARTSpeedCmdState = UART_SPEED_CMD_NORMAL;

void UARTSpeedCmdDetectReset(void)
{
    UARTSpeedCmdState = UART_SPEED_CMD_LOSE;
}

void UARTSpeedCmdReceived(void){
    UARTSpeedCmdState = UART_SPEED_CMD_NORMAL;
}