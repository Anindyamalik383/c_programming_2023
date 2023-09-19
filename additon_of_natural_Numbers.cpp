#include <stdio.h>

int a=0;
int b=1;
int n;

int main(){
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++){
		a=a+i;
		printf("%d\n",i);
	}
	printf("the result is:%d",a);
	return 0;
}
