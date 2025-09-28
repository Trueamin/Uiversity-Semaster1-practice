#include <stdio.h>
#include <stdio.h>

int main(){

    char operate;
    int num1, num2;
    printf("Enter an operator: +,-,*,/ and two values:  ");
    scanf("%c %d %d" ,&operate ,&num1 ,&num2);

    if (operate == '+'){
        printf("%d",num1 + num2);
    }
    else if(operate == '-'){
        printf("%d",num1 - num2);
    }
    else if(operate == '*'){
        printf("%d",num1 * num2);
    }
    else if(operate == '/'){
        printf("%d",num1 / num2);
    }
    else {
        printf("Invalid Operator");
    }
    return 0;
}