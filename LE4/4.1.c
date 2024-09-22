#include<stdio.h>

void main(){
    int n1,n2,n3;
    printf("Enter first no.:");
    scanf("%d",&n1);
    printf("Enter second no.:");
    scanf("%d",&n2);
    printf("Enter third no.:");
    scanf("%d",&n3);
    if (n1>n2 && n1>n3){
        printf("Number 1 %d is greatest\n",n1);
    }
    else if (n2>n1 && n2>n3){
        printf("Number 2 %d is greatest\n",n2);
    }
    else{
        printf("Number 3: %d is greatest\n",n3);
    }

}