#include "tshirts.h"
#include <stdio.h>
#include <assert.h>

int main(void)
{
    assert(size(3500) == -1);
    assert(size(37) == 'S');
    assert(size(38) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    printf("All is well (maybe!)\n");
    return 0;
}
