#include "misaligned.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void)
{
    char heading[MAX_ROW_LEN];
    char row[MAX_ROW_LEN];
    int result = printColorMap();

    assert(indexesToPairNumber(0, 0) == 1);    
    formHeading(heading);
    assert(strcmp(heading, "| Pair number | Major color | Minor color |") == 0);
    
    formRow(0, 0, row);
    assert(strcmp(row, "|      1      |    White    |    Blue     |") == 0);
    formRow(0, 1, row);
    assert(strcmp(row, "|      2      |    White    |   Orange    |") == 0);

    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
