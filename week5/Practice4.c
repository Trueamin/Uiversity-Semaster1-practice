#include <stdio.h>

int main() {
    int num1, num2;
    // دریافت عدد اول
    printf("Enter the first number: ");
    scanf("%d", &num1);
    // دریافت عدد دوم
    printf("Enter the second number: ");
    scanf("%d", &num2);
    // مقایسه به صورت عکس عدد ها
    if (num1 < num2) {
        printf("%d < %d\n", num2, num1);
    } else if (num1 > num2) {
        printf("%d < %d\n", num1, num2);
    } else { 
        printf("%d = %d\n",num1 ,num2);
    }

    return 0;
}
