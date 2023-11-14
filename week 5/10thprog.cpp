#include <stdio.h>

int n,key,c=0;

int main(){
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		
	for(int i=0;i<n;i++){
		key=a[i];
		for(int j=0;j<i;j++){
		if(key==a[j]){
			c=a[j];
		}
	}
}
	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("The duplicate element is:%d",c);
	
	return 0;
	
}
