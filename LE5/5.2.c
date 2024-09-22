#include<stdio.h>

void main(){
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if (yr%100==0  )
    {
       if (yr%400==0 )
       {
        printf("It's a leap year\n");
       }
       else{
        printf("Not a leap year\n");
       }
       
    }
    else{
        if(yr%4==0)
        printf("It a leap year\n");
        else
        printf("Not a leap year\n");
    }
    
}