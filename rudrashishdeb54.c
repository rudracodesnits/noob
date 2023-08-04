#include <stdio.h>

#define MAX_SIZE 100

void swapElements(int array[], int n) {
    int temp = array[n];
    array[n] = array[n + 2];
    array[n + 2] = temp;
}

void printArray(int array[], int size) {
    printf("Array elements: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main() {
    int array[MAX_SIZE];
    int size, n;

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

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0 || n >= size - 2) {
        printf("Invalid value of n. Exiting the program.\n");
        return 0;
    }

    printf("Original array: ");
    printArray(array, size);

    swapElements(array, n);

    printf("Array after swapping nth and (n+2)th elements: ");
    printArray(array, size);

    return 0;
}
