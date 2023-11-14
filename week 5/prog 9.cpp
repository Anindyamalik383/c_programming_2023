#include <stdio.h>

int n,m;

int main(){
	printf("Entet the value of N:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		if(a[i]!=i+1){
			m=i-1;
			
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("The missing number is:%d",m);
	return 0;
}
