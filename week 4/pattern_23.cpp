#include <stdio.h>

int  n;

int main(){
  printf("Enter the value of n:");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      printf("%d",i);
      if(j==(n-1))
      printf("%d",i+1);
    }
    printf("\n");
  }
  return 0;
}