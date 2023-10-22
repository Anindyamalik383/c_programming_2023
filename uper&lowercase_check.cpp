#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character to be checked: ");
    scanf(" %c", &ch);

    if(ch>='A' && ch<='Z'){
      printf("The given character is a uppercase charcter:%c", ch);
    }
    else if(ch>='a' && ch<='z'){
      printf("The given character is a lowercase charcter:%c", ch);
    }
    else{
      printf("The input given is not a character");
    }

    return 0;
}
