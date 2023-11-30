#include <stdio.h>

int main() {
    char str[] = "madam";
    int i, length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");

    return 0;
}
