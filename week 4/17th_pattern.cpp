#include <stdio.h>

int main(){
  int n,count=0;
  printf("enter the number:");
  scanf("%d",&n);

for(int i=0;i<=n;i++){
for(int j=0;j<i;j++){
  count++;
  printf("%d ",count);
}
  printf("\n");
}
return 0;
}