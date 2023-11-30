#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i, length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("The reversed string is: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
