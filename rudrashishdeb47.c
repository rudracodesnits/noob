#include <stdio.h>

#define MAX_SIZE 100

void separateOddEven(int array[], int size, int oddArray[], int evenArray[], int *oddSize, int *evenSize) {
    *oddSize = 0;
    *evenSize = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenArray[*evenSize] = array[i];
            (*evenSize)++;
        } else {
            oddArray[*oddSize] = array[i];
            (*oddSize)++;
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[MAX_SIZE];
    int oddArray[MAX_SIZE], evenArray[MAX_SIZE];
    int size, oddSize, evenSize;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    separateOddEven(array, size, oddArray, evenArray, &oddSize, &evenSize);

    printf("Original array: ");
    printArray(array, size);

    printf("Odd array: ");
    printArray(oddArray, oddSize);

    printf("Even array: ");
    printArray(evenArray, evenSize);

    return 0;
}
