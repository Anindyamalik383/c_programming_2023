#include <stdio.h>

char chk;
float g,h,b,ta,da;

 int main(){

    do{
    int r;

    printf("Enter the basic pay amount:");
    scanf(" %f", &b);
    printf("Choose the type of city which you belong to \n");
    printf("For Metropolitian select 1 \n For Tier 1 select 2 \n For Tier 2 select 3 \n For Tier 3 select 4 \n");
    scanf("%d", &r);

    ta = b*0.08;
    da = b*0.44;

    if(r==1){
        h = b*0.27;
    }
    else if(r==2){
        h = b*0.24;
    }
    else if(r==3){
        h = b*0.16;
    }
    else if(r==4){
        h = b*0.12;
    }
    else {
        printf("Wrong input given\n");
    }

        g = b+h+ta+da;
    
    printf("Total salary or gross salary is:%f \n", g);
    printf("Do you want to recalculate?\n");
    scanf(" %c", &chk);
    }
    while(chk=='y');

    return 0;

 }