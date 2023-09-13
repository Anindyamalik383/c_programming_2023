#include <stdio.h>

int y,days,m;

int main(){
    printf("Enter the year:");
    scanf("%d",&y);
    printf("Enter the month:");
    scanf("%d",&m);

    if(y%4==0&&(y%100!=0||y%400==0) && m==2){
        printf("The given input year is a leap year \n");
        days=29;
    }
    else if(m==1){
        days=31;
    }
    else if(m==2){
        days=28;
    }
    else if(m==3){
        days=31;
    }
    else if(m==4){
        days=30;
    }
    else if(m==5){
        days=31;
    }
    else if(m==6){
        days=30;
    }
    else if(m==7){
        days=31;
    }
    else if(m==8){
        days=31;
    }
    else if(m==9){
        days=30;
    }
    else if(m==10){
        days=31;
    }
    else if(m==11){
        days=30;
    }
    else if(m==12){
        days=31;
    }
    else{
        printf("Wrong input given\n");
    }
    printf("The number of days in this month is:%d",days);
    return 0;
}