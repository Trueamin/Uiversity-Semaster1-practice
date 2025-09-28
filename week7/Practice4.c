#include <stdio.h>

int main() {
    int nums[1000];
    int index = 0;
    int num;
    
    do {
        printf("Enter a number(for end Enter 0): ");
        scanf("%d", &num);
         
        nums[index] = num;
        index++;
    } while (num != 0);

    printf("Numbers entred in reverse order: \n");
    for (int i = index - 2; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}
