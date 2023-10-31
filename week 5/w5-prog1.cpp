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
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("The sorted array is:");
	for(int i=0;i<n;i++){
	printf("%d",a[i]);
}
printf("\n");
for(int i=0;i<n;i++){
	sum=sum+a[i];
}
avg=sum/n;

printf("The minimum of the array is:%d\n",a[0]);
printf("The maximum of the array is:%d\n",a[n-1]);
printf("The average of the array is:%d\n",avg);

	return 0;
}
