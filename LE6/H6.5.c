/*Question
WAP to find x to the power of y where x and y will be inputted from the
keyboard..
Input:
Enter the value of x and y: 3 2
Output:
3 to the power 2 = 9*/
#include <stdio.h>

void main() {
    //r=result
    int x, y, i, r = 1;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= y; ++i) {
        r *= x;
    }

    printf("%d to the power %d = %d\n", x, y, r);
}