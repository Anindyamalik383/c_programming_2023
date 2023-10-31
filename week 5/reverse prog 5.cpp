#include <stdio.h>

int n,t,avg,sum=0;

int main(){
	printf("Enter the number of elements:");
	scanf("%d",&n);

	
	int a[n-1];
	
	printf("Enter the elements of the array:");
	
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	
	for(int i=0;i<n;i++){
		a[i]=a[n-i];
	}
	printf("The reversed array is:");
	for(int i=0;i<n;i++){
	printf("%d, ",a[i]);
}

	return 0;
}
