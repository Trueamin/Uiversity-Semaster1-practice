#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        printf("It is possible to form a triangle with these sides\n");
    } else {
        printf("It is not possible to form a triangle with these sides\n");
    }

    return 0;
}