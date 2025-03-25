#include <stdio.h>
#include <math.h>
#include <conio.h> 

int main() {
    float a, b, c;
    float discriminant, r1, r2, real, imaginary;
    clrscr();

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots based on the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        r1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    } else {
        // Complex roots
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
    }
    getch();
    return 0;
}