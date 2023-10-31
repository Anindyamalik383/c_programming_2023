#include <stdio.h>

int n;

int main(){
	printf("Enter the number of elements:");
	scanf("%d",&n);

	
	int a[n-1];
	
	printf("Enter the elements of the array:");
	
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
if(n%2==0){
	for(int i=0;i<n;i+=2){
		a[i]=+a[i+1];
		a[i+1]=-a[i+1];
			
	}
}
for(int i=0;i<n;i++){
	printf("%d",a[i]);
}

	return 0;
}
