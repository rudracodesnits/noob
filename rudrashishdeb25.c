#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("\t\t\t");
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
