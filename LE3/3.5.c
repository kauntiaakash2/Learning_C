#include<stdio.h>

int main(){
    float n1,n2,tmpn;
    printf("Enter two nos.");
    scanf("%f %f",&n1,&n2);
    printf("Before Swap\n");
    printf("n1=%.2f\n",n1);
    printf("n2=%.2f\n",n2);
    tmpn=n1;
    n1=n2;
    n2=tmpn;
    printf("After Swap\n");
    printf("n1=%.2f\n",n1);
    printf("n2=%.2f\n",n2);
    return 0;
}