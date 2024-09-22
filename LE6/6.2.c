#include <stdio.h>

int main() {
    int i,sum = 0,num;
    float avg;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        sum+=num;
    }

    avg = (float)sum / 10;
    printf("The sum is %d. The average is %f\n", sum, avg);

    return 0;
}