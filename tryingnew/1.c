#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using switch case to determine odd or even
    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
        case -1:
            printf("%d is an odd number.\n", num);
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
