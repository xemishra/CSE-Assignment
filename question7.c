#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int A[] = {1, 5, 6, 8, 3, 2, 1, 0};
    int size = sizeof(A) / sizeof(A[0]);
    int key;
    printf("Enter number to search: ");
    scanf("%d", &key);
    int index = linearSearch(A, size, key);
    if (index != -1)
        printf("Element found at index: %d\n", key);
    else
        printf("Element not found in array.\n");
    return 0;
}
