#include <stdio.h>
int main() {
    int rows = 5;  
    for (int i = 1; i <= rows; i++) {
        printf("\t\t\t");
        if (i == 1 || i == rows) {
            for (int j = 1; j <= rows; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 2; j < rows; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
