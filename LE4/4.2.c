#include<stdio.h>

void main(){
    int n1;
    printf("Enter a no.:");
    scanf("%d",&n1);
    if (n1%2==0)
    {
        printf("%d is an EVEN number.\n",n1);

    }
    else{
        printf("%d is an ODD number.\n",n1);
    }
    
}