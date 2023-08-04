#include <stdio.h>

#define MAX_SIZE 100

void swapArrays(int *array1, int *array2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(array1 + i);
        *(array1 + i) = *(array2 + i);
        *(array2 + i) = temp;
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int size;

    printf("Enter the size of the arrays (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    printf("Before swapping:\n");
    printf("Array 1: ");
    printArray(array1, size);
    printf("Array 2: ");
    printArray(array2, size);

    swapArrays(array1, array2, size);

    printf("After swapping:\n");
    printf("Array 1: ");
    printArray(array1, size);
    printf("Array 2: ");
    printArray(array2, size);

    return 0;
}
