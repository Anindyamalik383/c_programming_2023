#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];
    int i = 0;

    while ((destination[i] = source[i]) != '\0') {
        i++;
    }

    printf("The copied string is: %s\n", destination);

    return 0;
}
