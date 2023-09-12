#include <stdio.h>

float a,b,c;

int main(){
    printf("Enter the first side of the triangle:");
    scanf("%f",&a);
    printf("Enter the second side of the triangle:");
    scanf("%f",&b);
    printf("Enter the third side of the triangle");
    scanf("%f",&c);

    if(a==b && b==a && a==c ){
        printf("The given triangle is an Equilateral triangle");
    }
    else if(a==b||a==c){
        printf("The given triangle is an Isosceles triangle");
    }
    else{
        printf("The given triangle is a Scalene triangle");
    }
    return 0;
}