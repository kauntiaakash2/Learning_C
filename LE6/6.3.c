/*WAP to calculate the sum of digits of a given number
Input:
Enter a number: 546
Output:
Sum of the digits of 546 = 155*/
#include<stdio.h>

void main(){
    int n1,sum=0,n2;
    printf("Enter a no:");
    scanf("%d",&n1);
    while (n1!=0)
    {
        n2=n1%10;
        sum+=n2;
        n1=n1/10;
    }
    printf("The sum of digit = %d\n",sum);
}