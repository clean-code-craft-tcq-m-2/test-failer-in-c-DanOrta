#include "misaligned.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void)
{
    assert(indexesToPairNumber(0, 0) == 1);
    char heading[MAX_ROW_LEN];
    formHeading(heading);
    assert(strcmp(heading, "Pair number,Major color,Minor color") == 0);
    
    char row[MAX_ROW_LEN];
    formRow(0, 0, row);
    assert(strcmp(row, "1,White,Blue") == 0);
    formRow(0, 1, row);
    assert(strcmp(row, "2,White,Orange") == 0);

    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
