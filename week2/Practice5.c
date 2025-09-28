#include <stdio.h>
#include <math.h>

int main (){

    unsigned int x ,a ,b ,c ,d ,e;
    printf("Enter the amount of money: ");
    scanf("%d" ,&x);
    a = x / 100;
    b = (x % 100) / 20;
    c = (x % 20) / 10;
    d = (x % 10) / 5;
    e = (x % 5) / 1;

    printf("%d(100T)\n%d(20T)\n%d(10T)\n%d(5T)\n%d(1T)\n" ,a ,b ,c ,d ,e);

    return 0;

}