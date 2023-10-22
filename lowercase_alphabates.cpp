#include <stdio.h>

char ch;

int main(){
  ch='a';
  printf("Lower case characters\n");
  while(ch<='z'){
    printf(" %c\n",ch);
    ch++;
  }
  return 0;

}