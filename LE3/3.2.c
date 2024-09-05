#include<stdio.h>

int main(){
    float centigrade,farenheit;
    printf("Enter temperature in Farenheit:");
    scanf("%f",&farenheit);
    centigrade=(farenheit-32)*5/9;
    printf("The temp in centigrade is %.2f\n",centigrade);
    return 0;
}