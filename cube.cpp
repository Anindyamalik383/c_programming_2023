#include <stdio.h>
#include <math.h>

float a;

int main(){
	printf("Enter the number:");
	scanf("%f",&a);
	a=pow(a,3);
	printf("The cube of the number is:%f",a);
	return 0;
}
