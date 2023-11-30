#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    printf("The vowels in the string are: ");
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
        }
        i++;
    }

    return 0;
}
