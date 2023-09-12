#include <stdio.h>

float a,b,c;

int main(){
    
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the third number:");
    scanf("%f",&c);

    if (a==b && b==c && c==a){
        printf("The three numbers are equal");
    }
    else{
        printf("The three numbers are not equal");
    }
    return 0;
}