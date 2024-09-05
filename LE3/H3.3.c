#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total_mark, average_mark, percentage;

    printf("Enter the mark of subject 1: ");
    scanf("%f", &subject1);

    printf("Enter the mark of subject 2: ");
    scanf("%f", &subject2);

    printf("Enter the mark of subject 3: ");
    scanf("%f", &subject3);

    printf("Enter the mark of subject 4: ");
    scanf("%f", &subject4);

    printf("Enter the mark of subject 5: ");
    scanf("%f", &subject5);

    total_mark = subject1 + subject2 + subject3 + subject4 + subject5;
    average_mark = total_mark / 5.00;
    percentage = (average_mark / 200.00) * 100.00;

    printf("Average mark: %.2f\n", average_mark);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}