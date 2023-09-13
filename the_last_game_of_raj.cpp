#include <stdio.h>

int a,b,c;

int main(){
    printf("Enter the point for technique 1:");
    scanf("%d",&a);
    printf("Enter the point for technique 2:");
    scanf("%d",&b);
    printf("Enter the point for technique 3:");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("Raj needs to use the first techniques whose point is %d to win the match.\n",a);
    }
    else if(b>c ){
        printf("Raj needs to use the second techniques whose point is %d to win the match.\n",b);
    }
    else{
        printf("Raj needs to use the third techniques whose point is %d to win the match.\n",c);
    }
    printf("Hope you win Raj... :) \n");
    return 0;
}