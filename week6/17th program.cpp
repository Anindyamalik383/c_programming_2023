#include <stdio.h>

int main() {
    char str[] = "Hello, World! This is a test string.";
    int i = 0, words = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
        i++;
    }

    printf("The number of words in the string is: %d\n", words);

    return 0;
}
