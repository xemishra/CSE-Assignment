#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], ch;
    printf("Enter the filename to read: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file %s\n", filename);
        return 1;
    }
    printf("\nContents of the file %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
