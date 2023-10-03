#include <stdio.h>

int n;

int main(){
	
	printf("Enter the nth value");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++){
		
		printf("* ");
	}
	printf("\n");
	}
	return 0;
	
}
