/*WAP to check a number is palindrome or not.
Input 1:
Enter a number: 121
Output 1:
121 is a palindrome number
Input 2:
Enter a number: 427
Output 2:
427 is not a palindrome number*/
#include<stdio.h>

void main(){
    //rn= reversedNum;r=remainder;on=originalNum
    int num,rn = 0,r,on;

    printf("Enter a number: ");
    scanf("%d", &num);

    on = num;

    while (num!=0) {
        r = num % 10;
     rn = rn * 10 + r;
        num /= 10;
    }

    if (on == rn) {
        printf("%d is a palindrome number\n", on);
    } else {
        printf("%d is not a palindrome number\n", on);
    }
}