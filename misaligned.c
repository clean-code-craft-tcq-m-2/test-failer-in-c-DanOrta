#include "misaligned.h"
#include <stdio.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int indexesToPairNumber(int majorIndex, int minorIndex)
{
    return (majorIndex * 5) + minorIndex;
}

void formHeading(char* heading)
{
    strcpy(heading, "Pair number,Major color,Minor color");
}

void formRow(int majorIndex, int minorIndex, char* row)
{
    sprintf(row, "%d,%s,%s", indexesToPairNumber(majorIndex, minorIndex), majorColor[majorIndex], 
        minorColor[minorIndex]);
}

int printColorMap(void)
{
    char heading[MAX_ROW_LEN];
    formHeading(heading);
    printf("%s\n", heading);
    int i = 0, j = 0;

    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++)
        {
            char row[MAX_ROW_LEN];
            formRow(i, j, row);
            printf("%s\n", row);
        }
    }
    return (i * j);
}
