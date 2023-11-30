#include <stdio.h>

int main() {
    char str[] = "HELLO, WORLD!";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("The converted string is: %s\n", str);

    return 0;
}
