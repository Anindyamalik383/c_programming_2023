#include <stdio.h>

int n,k;

int main(){
	printf("Enter the number of elements:");
	scanf("%d",&n);

	
	int a[n-1];
	
	printf("Enter the elements of the array:");
	
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=j;k<n-1;k++){
					a[k]=a[k+1];
				}
			
				n--;
			}
				else{
					j++;
				}
				
			}
		}
	
	printf("The sorted array is:");
	for(int i=0;i<n;i++){
	printf("%d, ",a[i]);
}

	return 0;
}
