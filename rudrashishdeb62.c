#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}
void findPrimeNumbers(int *array, int size) {
    printf("Prime numbers in the array: ");

    for (int i = 0; i < size; i++) {
        if (isPrime(array[i])) {
            printf("%d ", array[i]);
        }
    }

    printf("\n");
}

int main() {
    int array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    findPrimeNumbers(array, size);

    return 0;
}
