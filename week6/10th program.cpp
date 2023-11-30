#include <stdio.h>

int main() {
    char str[50] = "Hello, World!";
    char ch = 'X';
    int pos = 7;
    int i, length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (i = length; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    str[pos] = ch;

    printf("The modified string is: %s\n", str);

    return 0;
}
