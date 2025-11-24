#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j, length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}
