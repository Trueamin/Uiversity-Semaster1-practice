#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int r ,c ,a ,b;
    printf("Enter row and seat: ");
    scanf("%d%d",&r,&c);
    if((r>=1 && r<=10) && (c>=1 && c<=20)){
        a=11-r ;
        if(c>=11&&c<=20){
            b=21-c;
        }else{
            b=c;
        }
        if(c<=10){
            printf("Right %d %d",a ,b);
        }else{
            printf("Left %d %d",a ,b);
        }
    }else{
        printf("Your row or seat number is invalid!");
        }

    return 0;
}


