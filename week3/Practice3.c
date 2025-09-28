#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, root1, root2;

    printf("Enter the coefficients of the second degree equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (delta > 0) {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);
        printf("The roots of the equation are: %.2f and %.2f\n", root1, root2);
    } else if (delta == 0) {
        root1 = -b / (2*a);
        printf("The root of the equation is: %.2f\n", root1);
    } else {
        printf("No real roots for the given coefficients\n");
    }

    return 0;
}