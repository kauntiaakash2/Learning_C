/*WAP to print all even numbers within a given range. The range is given by
the user.
Input:
Enter two numbers: 1 20
Output:
Even numbers within range 1 and 20 are: 2 4 6 8 10 12 14 16 18 20*/
#include<stdio.h>

void main(){
    int n1,n2;
    printf("Enter two number:");
    scanf("%d %d",&n1,&n2);
    for ( ; n1<=n2 ; n1++)
    {
        if (n1%2==0)
        {
            printf("%d",n1);
        }
        printf(" ");
        
    }
    printf("\n");
}