#include <stdio.h>
#include <math.h>

float p,r,n,t,a,s;

int main(){
	printf("Enter the initial principle balance:");
	scanf("%f",&p);
	printf("Enter the rate of intertest:");
	scanf("%f",&r);
	printf("Enter the number of times interest applied per time period:");
	scanf("%f",&n);
	printf("Enter the number of time period elapsed:");
	scanf("%f",&t);
	
	a=p*(pow((1+(r/n)),(n*t)));
	s=p*r*t;
	
	printf("the compound interest is:%f \n",a);
	printf("the simple interest is:%f \n",s);
	
	return 0;
	
}
