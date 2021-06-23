#ifndef __SPEEDCMDPROCESS_H
#define __SPEEDCMDPROCESS_H


typedef enum{
    UART_SPEED_CMD_NORMAL = 0,
    UART_SPEED_CMD_LOSE
}UARTSpeedCmdErrorType;

extern UARTSpeedCmdErrorType UARTSpeedCmdState;

extern void UARTSpeedCmdDetectReset(void);
extern void UARTSpeedCmdReceived(void);


#endif
