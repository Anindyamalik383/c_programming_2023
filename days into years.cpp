#include <stdio.h>

int dy,res,fin;

int main(){
	printf("Enter the number of days to be converted:");
	scanf("%d",&dy);
	fin=dy/365;
	res=dy-365;
	printf("the number of years is:%d year %d days",fin,res);
	return 0;
	
}
