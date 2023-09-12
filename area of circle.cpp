#include <stdio.h>
#include <math.h>

float p=22/7;
float r;
float a;

int main(){
	printf("Enter the radius:");
	scanf("%f",&r);
	a=p*(pow(r,2));
	printf("The area of the circle is=%f",a);
	
	return 0;
	
}
