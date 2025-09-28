#include <stdio.h>

void removeValue(int arr[], int *n, int value) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (arr[i] == value) {
            for (j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            i--;
        }
    }
}

int main() {
    int n, value, i;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the list: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to remove from the list: ");
    scanf("%d", &value);

    removeValue(arr, &n, value);

    printf("List after removing %d:\n", value);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}