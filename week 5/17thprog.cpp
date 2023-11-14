#include <stdio.h>

int n,c,count=0;

int main(){
	printf("Enter the number of elements of the array:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements of the arrray:");
	
	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<n;i++){
		c=a[i];
		printf("For %d ",c);
			for(int j=0;j<i;j++){
				if(c==a[j]){
				count++;
			}
		}
		printf("The frequency is:%d\n",count);
		count=0;
	}
return 0;


}
