#include <stdio.h>

int n,c=0;

int main(){
	printf("Enter the number to be calculated:");
	scanf("%d",&n);
	
	for(c=0;n!=0;c++)
	{
		n=n/10;
	}
	printf("The lenght of the number is:%d",c);
	return 0;
}
