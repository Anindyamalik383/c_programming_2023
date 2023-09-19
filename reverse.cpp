#include <stdio.h>

int n,reverse=0, remainder;

int main(){
	printf("Enter the number to be reversed:");
	scanf("%d",&n);
	
	while(n!=0){
		remainder=n%10;
		reverse =reverse*10+remainder;
		n=n/10;
	}
	printf("The reversed number is:%d",reverse);
	return 0;
}
