#include <stdio.h>

// Function to swap two numbers without using a variable
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);

    // After swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
