#include "misaligned.h"
#include <stdio.h>
#include <string.h>

// TODO?: Avoid macro-like functions
#define PADDING_PRESIZE(x)  ((COLUMN_SIZE - x) / 2)
#define LEFT_PADDING(x)     PADDING_PRESIZE(x) + x
#define RIGHT_PADDING(x)    ((COLUMN_SIZE - x) % 2) ? PADDING_PRESIZE(x) + 2 : PADDING_PRESIZE(x) + 1

const char * majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char * minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int indexesToPairNumber(int majorIndex, int minorIndex)
{
    return ((majorIndex * 5) + minorIndex) + 1;
}

void formHeading(char* heading)
{
    strcpy(heading, "| Pair number | Major color | Minor color |");
}

int numberOfCharacters(const char inputText[])
{
    char * pt = (char*)inputText;
    int colorCharSize = 0;

    // If the number of characters is greater than MAX_ROW_LEN, that means there's a possibility
    // of a buffer overflow!
    while ((*pt) && (colorCharSize < MAX_ROW_LEN))
    {
        pt++;
        colorCharSize++;
    }

    return colorCharSize;
}

void formRow(int majorIndex, int minorIndex, char* row)
{
    int MColNumOfChars = numberOfCharacters(majorColor[majorIndex]);
    int mColNumOfChars = numberOfCharacters(minorColor[minorIndex]);
    int index = indexesToPairNumber(majorIndex, minorIndex);

    // TODO?: Add an abstraction layer to the centering process instead of hardcoding the values!
    sprintf(row, "%c%*d%*c%*s%*c%*s%*c", 
    '|', 7, index, 7, '|', LEFT_PADDING(MColNumOfChars), majorColor[majorIndex], 
    RIGHT_PADDING(MColNumOfChars), '|', LEFT_PADDING(mColNumOfChars), minorColor[minorIndex],
    RIGHT_PADDING(mColNumOfChars), '|');
}

int printColorMap(void)
{
    char heading[MAX_ROW_LEN];
    char row[MAX_ROW_LEN];
    char divider[MAX_ROW_LEN] = {};
    int i = 0, j = 0;

    for(int k = 0; k < ((int)sizeof(heading)) - 1; k++)
        divider[k] = '=';

    formHeading(heading);
    printf("%s\n%s\n%s\n", divider, heading, divider);

    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++)
        {
            formRow(i, j, row);
            printf("%s\n", row);
        }
    }

    printf("%s\n", divider);
    return (i * j);
}
