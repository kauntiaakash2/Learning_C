#include <stdio.h>

int main() {
    int n1, n2, r;
    char o;

    //Input two numbers.
    printf("Enter two nbers: ");
    scanf("%d %d", &n1, &n2);

    //Input the operator.
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &o);

    //Perform the operation using switch case.
    switch (o) {
        case '+':
            r = n1 + n2;
            break;
        case '-':
            r = n1 - n2;
            break;
        case '*':
            r = n1*n2;
            break;
        case '/':
            if (n2 != 0) {
                r = n1 / n2;
            } else {
                printf("Error: Division by zero!\n");
                return 0;
            }
            break;
        case '%':
            if (n2 != 0) {
                r = n1 % n2;
            } else {
                printf("Error: Division by zero!\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }

    //Print the result
    printf("Result: %d\n", r);

    return 0;
}