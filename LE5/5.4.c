#include <stdio.h>

int main() {
    //wn=week number
    int wn;

    //Input weekday number
    printf("Enter the week day number (0-6): ");
    scanf("%d", &wn);

    //Check if the input is within the valid range
    if (wn < 0 || wn > 6) {
        printf("Invalid weekday number. Please enter a number between 0 and 6.\n");
        return 0;
    }

    //Use switch case to print the weekday name
    switch (wn) {
        case 0:
            printf("This is Sunday\n");
            break;
        case 1:
            printf("This is Monday\n");
            break;
        case 2:
            printf("This is Tuesday\n");
            break;
        case 3:
            printf("This is Wednesday\n");
            break;
        case 4:
            printf("This is Thursday\n");
            break;
        case 5:
            printf("This is Friday\n");
            break;
        case 6:
            printf("This is Saturday\n");
            break;
    }

    return 0;
}