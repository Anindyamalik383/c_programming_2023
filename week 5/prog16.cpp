#include <stdio.h>

int n;

int main(){
	printf("Enter the length of the arrays");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	
	printf("Enter the elements of the first array:");
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the elements of the second array:");
	
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
	
	printf("The copied elents of the array is\n ");
	
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	return 0;
	
}
