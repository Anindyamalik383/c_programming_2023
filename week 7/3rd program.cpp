#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int length, i;
    char *begin_ptr, *end_ptr, temp;

    length = strlen(str);

    begin_ptr = str;
    end_ptr = str;

    for (i = 0; i < length - 1; i++)
        end_ptr++;

    for (i = 0; i < length / 2; i++) {        
        temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;

        begin_ptr++;
        end_ptr--;
    }
}

int main() {
    char str[100] = "Hello, World!";

    printf("Before: %s\n", str);

    reverse(str);

    printf("After: %s\n", str);

    return 0;
}
