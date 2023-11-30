#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog. The dog was not amused.";
    char word[] = "the";
    char *p;
    int count = 0;

    p = strstr(str, word);

    while (p != NULL) {
        count++;
        p = strstr(p + 1, word);
    }

    printf("The frequency of the word '%s' is: %d\n", word, count);

    return 0;
}
