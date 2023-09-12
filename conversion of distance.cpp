#include <stdio.h>

float k,m,mm,cm;
int a;

int main(){
	printf("Enter the distance to be changed in km:");
	scanf("%f",&k);
	printf("Choose 1 to change into meters \n Choose 2 to change into cm \n Choose 3 to change into mm \n");
	scanf("%d",&a);
	
	if (a==1){
		m=k*1000;
		printf("the distance in meteres is=%f",m);
	}
	else if(a==2){
		cm=k*1000*1000;
		printf("the distance in cm is=%f",cm);
	}
	else if(a==3){
		mm=k*1000*1000*100;
		printf("the distance in mm is=%f",mm);
	}
	else{
		printf("Wrong choice selected.");
	}
	return 0;
}
