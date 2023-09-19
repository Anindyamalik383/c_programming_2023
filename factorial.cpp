#include <stdio.h>

int n;

int main(){
	printf("Enter the number for factorial check:");
	scanf("%d",&n);
	
	for(int i=n;i>0;i--){
		printf("%d\n",i);
	}
	return 0;
}
