#include <stdio.h>

int n;

int main(){
  printf("Enter the nth value of the pattern:");
  scanf("%d",&n);
  
  
for(int i=0;i<n;i++){
  for(int j=0;j<=i;j++){
    printf(" *");
  }
  printf("\n");
}
for(int i=0;i<n;i++){
  for(int j=n;j>i;j--){
    printf(" *");
  }
  printf("\n");

}
    return 0;
  }
  
