#include<stdio.h>

int main(){
    float radius,area;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=(3.142)*radius*radius;
    printf("area of circle :%.2f\n",area);
    return 0;
}