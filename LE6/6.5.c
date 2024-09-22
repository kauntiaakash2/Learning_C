/*WAP to find the GCD/HCF and LCM of two given numbers.
Input:
Enter two numbers: 20 30
Output:
GCD of 20 and 30 is 10.
LCM of 20 and 30 is 60.*/
#include <stdio.h>
void main()
{
    int x, y, n, a, b;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    a = x;
    b = y;
    while (y != 0)
    {
        n = y;
        y = x % y;
        x = n;
    }
    printf("The GCD of %d and %d is: %d\n", a, b, n);
    printf("The LCM of %d and %d is: %d\n", a, b, (a*b)/n);

}