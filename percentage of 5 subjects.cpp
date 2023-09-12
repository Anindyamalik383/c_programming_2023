#include <stdio.h>

int a,b,c,d,e,r;

int main(){
	printf("Enter the marks of all the subjects:");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	r=(a+b+c+d+e)/5;
	printf("Percentage of the student is=%d%%",r);
	
	return 0;
	
}
