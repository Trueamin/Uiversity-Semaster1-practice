#include <stdio.h>
#include <math.h>

int main(){
    int number1, number2, number3;
    printf("Enter three number: ");
    scanf("%d %d %d",&number1 ,&number2 ,&number3);

    if (number1 > number2 && number2 > number3){
        printf("maximum is %d%d%d",number1 ,number2 ,number3);
    } 
    if(number1 > number3 && number3 > number2){
        printf("maximum is %d%d%d",number1 ,number3 ,number2);
    }
    if(number2 > number1 && number1 > number3){
        printf("maximum is %d%d%d",number2 ,number1 ,number3);
    } 
    if(number2 > number3 && number3 > number1){
        printf("maximum is %d%d%d",number2 ,number3 ,number1);
    }
    if(number3 > number2 && number2 > number1){
        printf("maximum is %d%d%d",number3 ,number2 ,number1);
    }
    if(number3 > number1 && number1 > number2){
        printf("maximum is %d%d%d",number3 ,number1 ,number2);
    }

    return 0;
}