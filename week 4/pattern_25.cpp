#include <stdio.h>

char ch;

int main(){
  printf("Enter the capital character:");
  scanf("%c",&ch);

  for(char i='A';i<=ch;i++){
    for(char j='A';j<i;j++){
      printf("%c ",j);
    }
    printf("\n");
  }
  return 0;
}