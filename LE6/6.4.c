/*WAP to calculate the f of a given number.
Input :
Enter a number: 5
Output :
Factorial of 5 = 120*/
#include <stdio.h>

void main() {
    int num, i;
    int f = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        f *= i;
    }
    if (num == 0)
        printf("The factorial of 0 is 1\n");

    else
        printf("Factorial of %d = %d\n", num, f);
}