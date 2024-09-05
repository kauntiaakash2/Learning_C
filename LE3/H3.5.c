#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float s, area;

    printf("Enter the first side: ");
    scanf("%f", &a);

    printf("Enter the second side: ");
    scanf("%f", &b);

    printf("Enter the third side: ");
    scanf("%f", &c);

    s = (a + b + c) / 2.00;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is: %.3f\n", area);
    
    return 0;
}