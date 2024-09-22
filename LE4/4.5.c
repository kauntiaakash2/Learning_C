#include <stdio.h>

void calculate_bill(int previous_reading, int present_reading) {
    int total_units = present_reading - previous_reading;
    float bill_amount = 0.0;

    if (total_units <= 100) {
        bill_amount = total_units * 1.40;
    } 
    else if (total_units <= 200) {
        bill_amount = 100 * 1.40 + (total_units - 100) * 2.50;
    } 
    else {
        bill_amount = 100 * 1.40 + 100 * 2.50 + (total_units - 200) * 3.20;
    }

    printf("Total units consumed: %d\n", total_units);
    printf("Bill amount: Rs %.2f\n", bill_amount);
}

int main() {
    int previous_reading, present_reading;

    printf("Enter previous meter reading: ");
    scanf("%d", &previous_reading);

    printf("Enter present meter reading: ");
    scanf("%d", &present_reading);

    if (present_reading < previous_reading) {
        printf("Invalid input! Present reading cannot be less than previous reading.\n");
    } 
    else {
        calculate_bill(previous_reading, present_reading);
    }

    return 0;
}