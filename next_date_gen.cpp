#include <stdio.h>

int month,date,y;

int main(){
    printf("Enter the date:");
    scanf("%d",&date);
    printf("Enter the month:");
    scanf("%d",&month);
    printf("Enter the year:");
    scanf("%d",&y);
    
    if((y%4==0&&(y%100!=0||y%400==0)) && (month==2) && (date==29)){
        date=1;
        month=++month;
    }

   else if((month==2) && (date==28)){
        date=1;
        month=++month;
    }
    else if((month%2==0) && (month!=2) && ((month!=8) && (month<8))){
        if(date==30){
            date=1;
            month=++month;
        }
        else{
            date=++date;
        }
    }
    else if(((month%2!=0) && (month<=8) && (month!=2)) || ((month%2==0) && ((month>=8) && (month<=12) ))){
        if((date==31) && (month<12)){
            date=1;
            month=++month;
        }
        else if((date==31) && (month==12)){
            date=1;
            month=1;
            y=++y;
        }
        else{
            date=++date;
        }
    }
    else{
         printf("Wrong input given so no changes will occur\n");
    }
    printf("The calculated date is:%d \n",date);
    printf("The calculated month is:%d \n",month);
    printf("The calculated year is:%d\n",y);
    
    return 0;
}
