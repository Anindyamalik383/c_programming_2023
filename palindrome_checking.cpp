#include <stdio.h>

int n,reverse=0, remainder,temp;

int main(){
	printf("Enter the number to be reversed:");
	scanf("%d",&n);
  temp=n;
	
	while(n!=0){
		remainder=n%10;
		reverse =reverse*10+remainder;
		n=n/10;
	}

  if(temp==reverse){
    printf("The given number is a planidrome number and the number is:%d\n",temp);
    printf("The reversed number is:%d\n",reverse);
  }
  else{
    printf("The  given number is not a palindrome number\n");
  }

	return 0;
}