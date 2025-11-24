#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("\nLength of first string: %lu\n", strlen(str1));
    char copy[100];
    strcpy(copy, str1);
    printf("Copy of first string: %s\n", copy);
    char concat[200];
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenation of strings: %s\n", concat);
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");
    char rev[100];
    strcpy(rev, str1);
#ifdef _MSC_VER
    strrev(rev);
    printf("Reversed first string: %s\n", rev);
#else
    int len = strlen(rev);
    for (int i = 0; i < len / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[len - i - 1];
        rev[len - i - 1] = temp;
    }
    printf("Reversed first string: %s\n", rev);
#endif
    char ch;
    printf("Enter a character to search in first string: ");
    scanf(" %c", &ch);
    char *pos = strchr(str1, ch);
    if (pos)
        printf("Character '%c' found at position: %ld\n", ch, pos - str1 + 1);
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
