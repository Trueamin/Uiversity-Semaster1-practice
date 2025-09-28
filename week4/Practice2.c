#include <stdio.h>
#include <math.h>

int main(){
    int number1, number2, number3;
    printf("Enter three number: ");
    scanf("%d %d %d",&number1 ,&number2 ,&number3);

    if(number1 > number2 && number1 > number3){
        printf("The maximum number is: %d",number1);
    } else if(number2 > number1 && number2 > number3){
        printf("The maximum number is: %d",number2);
    } else{
        printf("The maximum number is: %d",number3);
    }

    return 0;
}