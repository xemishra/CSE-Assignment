#include <stdio.h>
#include <math.h>

int main() {
    double num, base, exponent;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    if (num < 0)
        printf("Square root of negative number is not real.\n");
    else
        printf("Square root of %.2lf = %.2lf\n", num, sqrt(num));
    printf("\nEnter a number to find its natural logarithm: ");
    scanf("%lf", &num);
    if (num <= 0)
        printf("Logarithm of non-positive number is undefined.\n");
    else
        printf("Natural log of %.2lf = %.2lf\n", num, log(num));
    printf("\nEnter base and exponent to calculate base^exponent:\n");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf raised to the power %.2lf = %.2lf\n", base, exponent, pow(base, exponent));
    return 0;
}
