#include <stdio.h>
void calculateFactorial(int number, unsigned long long *result) {
    *result = 1;

    for (int i = 1; i <= number; i++) {
        *result *= i;
    }
}
int main() {
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    calculateFactorial(number, &factorial);

    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}