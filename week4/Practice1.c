#include <stdio.h>
#include <math.h>

int main(){

    int x, y, z;
    printf("Enter three positive integers: ");
    scanf("%d %d %d",&x ,&y ,&z);

    if (x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}