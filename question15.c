#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
