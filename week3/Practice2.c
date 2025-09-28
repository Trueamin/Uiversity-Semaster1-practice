#include <stdio.h>

int main() {
    float height, weight, bmi;

    // Input height and weight
    printf("Enter the height (in meters): ");
    scanf("%f", &height);
    printf("Enter the weight (in kilograms): ");
    scanf("%f", &weight);

    // Calculate BMI
    bmi = weight / (height * height);

    // Print BMI and appropriate message
    printf("BMI: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Overweight\n");
    } else if (bmi >= 30 && bmi <= 34.9) {
        printf("Obesity\n");
    } else if (bmi >= 35 && bmi <= 39.9) {
        printf("Extreme Obesity\n");
    }

    return 0;
}
