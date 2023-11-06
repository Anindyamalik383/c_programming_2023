#include <stdio.h>

int p,q,s,r,n;

int main(){
    printf("Enter the value of n:");
    scanf("%d",&n);
  int count=1;
  int a[n][n];
  
for(int i=0;i<(n+1)/2;i++){
  for(p=i;p<n-i;p++){
    a[i][p]=count++;
  }
  for(q=i+1;q<n-i;q++){
    a[q][n-i-1]=count++;
  }
  for(r=n-i-2;r>=i;r--){
    a[n-i-1][r]=count++;
  }
  for(s=n-i-2;s>i;s--){
    a[s][i]=count++;
  }
}
for(int i=0;i<n;i++){
  for (int j=0;j<n;j++){
    printf("%d ",a[i][j]);

  }
  printf("\n");
}


return 0;
}