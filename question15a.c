#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter roll number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
