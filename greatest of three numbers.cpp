#include <stdio.h>

float a,b,c;

int main(){
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	printf("Enter the third number:");
	scanf("%f",&c);
	
	if(a>b && a>c){
		printf("The greatest number is:%f",a);
	}
	else if(b>c){
		printf("The greatest number is:%f",b);
	}
	else {
		printf("The greatest number is:%f",c);
	}
	return 0;
}
