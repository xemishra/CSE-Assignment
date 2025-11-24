#include <stdio.h>

int main() {
    int N;
    int notes[] = {100, 50, 10, 5, 2, 1};
    int count[6] = {0};
    printf("Enter the amount: ");
    scanf("%d", &N);
    int remaining = N;
    for (int i = 0; i < 6; i++) {
        if (remaining >= notes[i]) {
            count[i] = remaining / notes[i];
            remaining = remaining % notes[i];
        }
    }
    printf("\nMinimum number of notes for Rs. %d:\n", N);
    for (int i = 0; i < 6; i++) {
        if (count[i] > 0)
            printf("Rs. %d: %d\n", notes[i], count[i]);
    }
    return 0;
}
