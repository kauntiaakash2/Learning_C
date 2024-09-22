#include <stdio.h>
#include <math.h>

int main() {
    //d=discriminant;r1=root1;r2=root2;rp=realPart;ip=imaginaryPart
    float a, b, c, d , r1 , r2 , rp , ip ;

    //Input values for a, b, and c
    printf("Enter values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    //Check if both a and b are zero
    if (a == 0 && b == 0) {
        printf("No solution\n");
        return 0;
    }

    //Calculate the discriminant
    d = b * b - 4 * a * c;

    //Check if the discriminant is equal to zero
    if (d == 0) {
        r1 = -b / (2 * a);
        printf("The root is real and equal. Root is %.2f\n", r1);
    }
    //Check if the discriminant is less than zero
    else if (d < 0) {
        rp = -b / (2 * a);
        ip = sqrt(-d) / (2 * a);
        printf("Roots are imaginary.\n");
    }
    //Otherwise, compute the two real roots
    else {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The Roots are real & unequal. Roots are %.2f and %.2f\n", r1, r2);
    }

    return 0;
}