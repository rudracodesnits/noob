#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Array of structures
    struct Student *ptr[n];      // Array of pointers to structures

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        ptr[i] = &students[i]; // Assigning the address of the structure to the pointer array
    }

    // Display student data
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", ptr[i]->name);
        printf("Roll Number: %d\n", ptr[i]->rollNumber);
        printf("Marks: %.2f\n", ptr[i]->marks);
        printf("\n");
    }

    return 0;
}
