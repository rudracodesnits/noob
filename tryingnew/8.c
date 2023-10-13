#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    char department;
    int semester;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Array of structures
    //struct Student *ptr[n];      // Array of pointers to structures

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Dept: ");
        scanf("%c", &students[i].department);
        printf("Semester: ");
        scanf("%d", &students[i].semester);

        //ptr[i] = &students[i]; // Assigning the address of the structure to the pointer array
    }

    // Display student data
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("roll no: %s\n", students[i].rollNumber);
        printf("Dept: %c\n", students[i].department);
        printf("semester: %d\n", students[i].semester);
        printf("\n");
    }

    return 0;
}
