#include<stdio.h>

int main(){
    float n1,n2;
    printf("Enter two nos.");
    scanf("%f %f",&n1,&n2);
    printf("Before Swap\n");
    printf("n1=%f\n",n1);
    printf("n2=%f\n",n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("After Swap\n");
    printf("n1=%f\n",n1);
    printf("n2=%f\n",n2);
    return 0;
}