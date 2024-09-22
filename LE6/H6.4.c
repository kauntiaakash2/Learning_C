/*WAP to find the first n numbers of a Fibonacci sequence.
Input :
Enter a number: 10
Output :
First 10 numbers of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34*/
#include <stdio.h>

void main() {
    //t1=term 1;t2=term 2;nt=nextTerm
    int n, i;
    int t1 = 0, t2 = 1, nt = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d numbers of the Fibonacci sequence are: ", n);

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);

        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }

    printf("\n");
}