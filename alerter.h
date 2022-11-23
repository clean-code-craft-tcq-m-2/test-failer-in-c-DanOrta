#ifndef __ALERTER_H__
#define __ALERTER_H__

extern int alertFailureCount;
void alertInCelcius(float farenheit, int (*alertTransmitter)(float));

#endif