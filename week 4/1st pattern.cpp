#include <stdio.h>

int n;

int main(){
	
	printf("Input the nth value");
	scanf("%d",&n);
	
	for (int i=0;i<=n;i++){
		
		for(int j=0;j<i;j++){
			
			printf("* ");
		}
		printf("\n");
	}
	return 0;

}
