#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    char colorMap[20] = {};

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            sprintf(colorMap, "%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            assert(colorMap[3] == '|');
            printf("%s", colorMap);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}