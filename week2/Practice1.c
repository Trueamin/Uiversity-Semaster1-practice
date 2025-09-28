#include <stdio.h>
#include <math.h>

int main() {
    float num = -9.856;
    
    int result = floor(num);
    
    printf("Floor integer of %.3f = %d", num, result);
    
    return 0;
}