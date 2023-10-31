#include <stdio.h>

int n,key,count;

int main(){
	printf("Enter the number of elements:");
	scanf("%d",&n);

	
	int a[n-1];
	
	printf("Enter the elements of the array:");
	
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("Enter the key to search for:");
scanf("%d",&key);

for(int i=0;i<=n;i++){
	if(key==a[i]){
		count++;
	}
}
	
	
	printf("Number %d is present %d times",key,count);

	return 0;
}
