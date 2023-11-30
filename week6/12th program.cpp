#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int count[256] = {0}, i;
    char mostRepeated, leastRepeated;
    int max = -1, min = 256;

    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            mostRepeated = i;
        }
        if (count[i] < min && count[i] != 0) {
            min = count[i];
            leastRepeated = i;
        }
    }

    printf("The most repeated character is '%c' and it appears %d times.\n", mostRepeated, max);
    printf("The least repeated character is '%c' and it appears %d times.\n", leastRepeated, min);

    return 0;
}
