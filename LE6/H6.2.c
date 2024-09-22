/*WAP to calculate the reverse of a given number.
Input:

Enter a number: 546
Output:
Reverse of 546 = 645*/
#include <stdio.h>

void main() {
    int num, reversed = 0, remainder, original;

 
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    // Calculate the reverse of the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }


    printf("Reverse of %d = %d\n", original, reversed);

}