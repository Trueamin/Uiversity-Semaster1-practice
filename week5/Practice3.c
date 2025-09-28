#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        // دریافت عدد از ورودی
        printf("Enter your number(Enter 0 for end): ");
        scanf("%d", &num);

        // جمع اعداد
        sum += num;
    } while (num != 0);

    printf("Sum of entered numbers: %d", sum);

    return 0;
}
