#include<stdio.h>

int main(){
    float centigrade,farenheit;
    printf("Enter temperature in Centigrade:");
    scanf("%f",&centigrade);
    farenheit=(centigrade*9/5)+32;
    printf("The temp in farenheit is %.2f\n",farenheit);
    return 0;
}