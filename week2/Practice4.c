#include <stdio.h>
#include <math.h>

int main(){

    int hour, minute, second;

    printf("Input second: ");
    scanf("%d" ,&second);
  
    hour = second / 3600;
    minute = (second % 3600) / 60;
    second = ((second % 60) % 60);

    printf("%d:%d:%d", hour, minute, second);
    return 0;
}