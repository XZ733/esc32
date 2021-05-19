#include "watchdog.h"
#include <stdlib.h>

WatchDogPin *WatchDogPinInit(GPIO_TypeDef* port, const uint16_t pin) 
{
	WatchDogPin *p;
//	uint16_t clock;
	GPIO_InitTypeDef GPIO_InitStructure;

	p = (WatchDogPin *)calloc(1, sizeof(WatchDogPin));
	p->port = port;
	p->pin = pin;

	WatchDogHi(p);

	GPIO_InitStructure.GPIO_Pin = pin;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(port, &GPIO_InitStructure);

	return p;
}

void WatchDogFeed(WatchDogPin *p) 
{
	if (WatchDogGet(p)) {
		WatchDogLo(p);
	}
	else {
		WatchDogHi(p);
	}
}