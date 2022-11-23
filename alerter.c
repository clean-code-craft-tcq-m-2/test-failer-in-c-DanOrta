#include <stdio.h>
#include "alerter.h"

int alertFailureCount = 0;

void alertInCelcius(float farenheit, int (*alertTransmitter)(float))
{
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = alertTransmitter(celcius);

    if (returnCode != 200)
    {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}
