#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(a)/(n1 * sizeof(a[0][0]));
    int temp[n1][n2];
    for(int k=0 ; k<n1; k++){
        for(int s=0; s<n2; s++){
            temp[k][s]=a[0][s];
            a[0][s]=a[n1-1][s];
            a[n1-1][s]=temp[k][s];
            }
        }
    printf("{{");
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            printf("%d,",a[i][j]);
        }printf("\b},{");
    }
    printf("\b\b} ");
    return 0;
}
