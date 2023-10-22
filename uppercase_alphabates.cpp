#include <stdio.h>

char ch;

int main(){
  ch='A';
  printf("Upper case characters\n");
  while(ch<='Z'){
    printf(" %c\n",ch);
    ch++;
  }
  return 0;

}