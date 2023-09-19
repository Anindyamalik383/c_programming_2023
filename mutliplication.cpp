#include <stdio.h>

int a,n;

int main(){
	printf("Enter the  number for which multiplication to be checked:");
	scanf("%d",&n);
	
	for(int i=0;i<=10;i++){
		a=n*i;
		printf("%dX%d=%d\n",n,i,a);
	}
	return 0;
}
