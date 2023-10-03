#include <stdio.h>

int n;

int main(){
	printf("Enter the nth value:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<i+n;s++)
		{
			printf(" ");
		}
		for(int j=0;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}
