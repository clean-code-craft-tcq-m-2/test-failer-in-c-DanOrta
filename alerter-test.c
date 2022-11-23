#include "alerter.h"
#include <stdio.h>
#include <assert.h>

int networkAlertStubSuccess(float celcius)
{
    printf("Alerted successfully: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return 200;
}

int networkAlertStubFailed(float celcius)
{
    printf("Alerting failed: Temperation %.1f celcius\n", celcius);
    return 500;
}

int main(void)
{
    alertInCelcius(400.5, networkAlertStubSuccess);
    assert(alertFailureCount == 0);
    alertInCelcius(303.6, networkAlertStubFailed);
    assert(alertFailureCount == 1);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well\n");
    return 0;
}
