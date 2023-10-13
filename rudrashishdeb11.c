#include <stdio.h>
int main() {
    int marks[5];
    
    printf("Enter the marks of five subjects:\n");
    //printf("Subject 1: ");
    scanf("%d%d%d%d%d", &marks[0],&marks[1],&marks[2], &marks[3],&marks[4]);
    // printf("Subject 2: ");
    // scanf("%d", &marks[1]);
    // printf("Subject 3: ");
    // scanf("%d", &marks[2]);
    // printf("Subject 4: ");
    // scanf("%d", &marks[3]);
    // printf("Subject 5: ");
    // scanf("%d", &marks[4]);

    if (marks[0] >= 30 && marks[1] >= 30 && marks[2] >= 30 && marks[3] >= 30 && marks[4] >= 30){
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}
