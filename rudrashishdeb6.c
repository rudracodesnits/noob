#include <stdio.h>
int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks;
    float average;
    char grade;

    printf("Enter the marks for five subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &marks1);
    printf("Subject 2: ");
    scanf("%d", &marks2);
    printf("Subject 3: ");
    scanf("%d", &marks3);
    printf("Subject 4: ");
    scanf("%d", &marks4);
    printf("Subject 5: ");
    scanf("%d", &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    average = totalMarks / 5.0;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
