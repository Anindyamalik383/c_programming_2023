#include <stdio.h> 

int y;

int main(){
	printf("Enter the year to be checked:");
	scanf("%d",&y);
	
	if(y%4==0&&(y%100!=0||y%400==0)){
		printf("This year is a leap year");
	}
	else{
		printf("This year is not a leap year");
	}
	return 0;
}
