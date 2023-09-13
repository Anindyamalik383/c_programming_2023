#include <stdio.h>

float bill, units;

int main(){
    printf("Enter the units consumed");
    scanf("%f",&units);

    if(units<=100){
        bill=4*units;
    }
    else if((units > 100) && (units <= 200)){
        bill=5*units;
    }
    else if((units > 200) && (units <= 300)){
        bill=6*units;
    }
    else if((units > 300) && (units <= 450)){
        bill=7*units;
    }
    else if((units > 450) && (units <= 650)){
        bill=8*units;
    }
    else if((units > 650) && (units <= 1000)){
        bill=20*units;
    }
    else if(units>1000){
        printf("Not to a usual consumer \n");
    }
    else{
        printf("Wrong input given");
    }
    printf("Your total electricity bill is:%f rs",bill);
    return 0;
}