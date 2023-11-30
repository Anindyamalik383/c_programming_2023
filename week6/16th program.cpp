#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i, j = 0;

    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U') {
            continue;
        }
        else {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("The string after deleting the vowels is: %s\n", str);

    return 0;
}
