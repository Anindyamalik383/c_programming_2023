#include <stdio.h>

int s,i,n;
int a=0;
int b=1;

int main(){
	printf("Enter the nth term to be calculated:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		s=(a+b);
		a=b;
		b=s;
	}
	printf("The result is:%d\n",s);
	return 0;
}
