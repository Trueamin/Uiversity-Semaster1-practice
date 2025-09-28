#include <stdio.h>

int main() {
    int num1, num2;

    // دریافت دو عدد از ورودی
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // بررسی اعداد فرد بین دو عدد
    printf("%d  %d :\n", num1, num2);
    for (int i = num1 + 1; i < num2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
