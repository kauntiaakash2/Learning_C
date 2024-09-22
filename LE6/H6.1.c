/*WAP to print all odd a even numbers separately within a given range in
desceing a asceing order respectively. The range is to be inputted
from the user..
Input:
Enter a range: 5 17
Output:
Odd numbers within range 17 a 5: 17 15 13 11 9 7 5
Even numbers within range 5 a 17: 6 8 10 12 14 16*/
#include <stdio.h>

int main() {
    int s, e, i;

    // Get the range from the user
    printf("Enter a range: ");
    scanf("%d %d", &s, &e);

    // Print odd numbers in desceing order
    printf("Odd numbers within range %d a %d: ", e, s);
    for (i = e; i >= s; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Print even numbers in asceing order
    printf("Even numbers within range %d a %d: ", s, e);
    for (i = s; i <= e; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}