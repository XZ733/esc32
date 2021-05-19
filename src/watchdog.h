#ifndef _WATCHDOG_H
#define _WATCHDOG_H

#include "stm32f10x_gpio.h"

typedef struct {
    GPIO_TypeDef* port;
    uint16_t pin;
} WatchDogPin;

#define GPIO_FEED_DOG_PORT	GPIOB
#define GPIO_FEED_DOG_PIN	GPIO_Pin_12

#define WatchDogHi(p)    { p->port->BSRR = p->pin; } //set
#define WatchDogLo(p)    { p->port->BRR = p->pin; }  //reset
#define WatchDogGet(p)   ((p->port->ODR & p->pin) != 0) //read

extern WatchDogPin *WatchDogPinInit(GPIO_TypeDef* port, const uint16_t pin);
extern void WatchDogFeed(WatchDogPin *p);




#endif

