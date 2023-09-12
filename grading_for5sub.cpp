#include <stdio.h>

float phy,chem,bio,mat,com;
float t;

int main(){
    printf("Enter the marks for Physics:");
    scanf("%f",&phy);
    printf("Enter the marks of Chemistry:");
    scanf("%f",&chem);
    printf("Enter the marks of Biology:");
    scanf("%f",&bio);
    printf("Enter the marks for Mathematics:");
    scanf("%f",&mat);
    printf("Enter the marks of Computer:");
    scanf("%f",&com);

    t=(phy+chem+bio+mat+com)/5;
    printf("Total percentage obtained is:%f%% \n",t);

    if(t>=90){
        printf("Grade obtained is:A");
    }
    else if(t>=80){
        printf("Grade obtained is:B");
    }
    else if(t>=70){
        printf("Grade obtained is:C");
    }
    else if(t>=60){
        printf("Grade obtained is:D");
    }
    else if(t>=40){
        printf("Grade obtained is:E");
    }
    else if(t<40){
        printf("Grade obtained is:F");
    }
    else{
        printf("No grade obtained");
    } 
  return 0;
}