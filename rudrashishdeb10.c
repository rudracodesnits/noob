#include <stdio.h>
int main() {
    int marks1, marks2, marks3;
    int highestMarks;

    printf("Enter the marks for three subjects:\n");
    //printf("Subject 1: ");
    scanf("%d%d%d", &marks1,&marks2,&marks3);
    //printf("Subject 2: ");
    //scanf("%d", &marks2);
    //printf("Subject 3: ");
    //scanf("%d", &marks3);

    highestMarks = (marks1 > marks2) ? marks1 : marks2;
    highestMarks = (highestMarks > marks3) ? highestMarks : marks3;

    printf("The highest marks among the three subjects: %d\n", highestMarks);

    return 0;
}
