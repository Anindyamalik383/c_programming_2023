#include <stdio.h>

int n,i;

int main(){
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
		
	}
	return 0;
	
}
