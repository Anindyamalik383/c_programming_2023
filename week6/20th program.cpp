#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World This is a test string";
    char temp[50];
    char words[10][50];
    int i = 0, j = 0, k = 0, w;

    // Split string into words
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[j][k++] = str[i];
        } else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    words[j][k] = '\0';

    // Sort words
    for (i = 0; i <= j; i++) {
        for (w = i + 1; w <= j; w++) {
            if (strcmp(words[i], words[w]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[w]);
                strcpy(words[w], temp);
            }
        }
    }

    // Print sorted words
    printf("The sorted words are:\n");
    for (i = 0; i <= j; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
