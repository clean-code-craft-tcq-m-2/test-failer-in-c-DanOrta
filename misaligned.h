#ifndef __MISALIGNED_H__
#define __MISALIGNED_H__

#define MAX_ROW_LEN 44
#define COLUMN_SIZE 13

int indexesToPairNumber(int majorIndex, int minorIndex);
void formHeading(char* heading);
int numberOfCharacters(const char * inputText);
void formRow(int majorIndex, int minorIndex, char* row);
int printColorMap(void);

#endif