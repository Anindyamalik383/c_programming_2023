#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character to be checked: ");
    scanf(" %c", &ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
      printf("The given character is a vowel:%c", ch);
    }
    else{
      printf("The given character is consonant:%c", ch);
    }

    return 0;
}
