#include <stdio.h>

int main() {
    char str[] = "hello, world!";
    int i = 0;

    // Capitalize the first character of the string
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    }

    // Capitalize the first character after each space
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z') {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }

    printf("The modified string is: %s\n", str);

    return 0;
}
