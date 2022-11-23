#ifndef __MISALIGNED_H__
#define __MISALIGNED_H__

#define MAX_ROW_LEN 80

int indexesToPairNumber(int majorIndex, int minorIndex);
void formHeading(char* heading);
void formRow(int majorIndex, int minorIndex, char* row);
int printColorMap();

#endif