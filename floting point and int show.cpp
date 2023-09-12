#include <stdio.h>

float a,b,c;
int d;

int main(){
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	c=a*b;
	d=c;
	printf("The result in float is=%f \n The result in integer is=%d",c,d);
	return 0;
	
}
