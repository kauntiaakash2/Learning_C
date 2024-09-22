#include <stdio.h>
int main()
{
    int previous_reading, present_reading, meter_reading;
    printf("Enter the previous meter reading: ");
    scanf("%d", &previous_reading);
    printf("Enter the current meter reading: ");
    scanf("%d", &present_reading);
    meter_reading = present_reading - previous_reading;
    if (meter_reading < 100){
        printf("Bill Amount: %0.2f\n", (float) meter_reading * 1.40);
    }
    else if(meter_reading < 200){
        printf("Bill Amount: %0.2f\n", (float) (meter_reading-100)* 2.50 + 100 * 1.40);
    }
    else if(meter_reading > 200){
        printf("Bill Amount: %0.2f\n", (float) ( meter_reading-200)* 3.20 + 100 * 2.50 + 100 * 1.40);
    }
    return 0;

}