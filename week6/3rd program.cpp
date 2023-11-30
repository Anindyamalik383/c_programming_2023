#include <stdio.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char str3[50];
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }

    str3[j] = '\0';

    printf("The concatenated string is: %s\n", str3);

    return 0;
}
