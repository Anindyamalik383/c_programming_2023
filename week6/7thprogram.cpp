#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("The strings are unequal.\n");
            return 0;
        }
        i++;
    }

    if (str1[i] != str2[i]) {
        printf("The strings are unequal.\n");
    } else {
        printf("The strings are equal.\n");
    }

    return 0;
}
