#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("The first occurrence of '%c' is at position %d\n", ch, i + 1);
            break;
        }
        i++;
    }

    return 0;
}
