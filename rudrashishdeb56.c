#include <stdio.h>

#define MAX_SIZE 100

void mergeArrays(int array1[], int size1, int array2[], int size2, int mergedArray[], int *mergedSize) {
    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2) {
        if (array1[i] <= array2[j]) {
            mergedArray[k++] = array1[i++];
        } else {
            mergedArray[k++] = array2[j++];
        }
    }

    while (i < size1) {
        mergedArray[k++] = array1[i++];
    }

    while (j < size2) {
        mergedArray[k++] = array2[j++];
    }

    *mergedSize = k;
}

void bubbleSortAscending(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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
    int array1[MAX_SIZE];
    int array2[MAX_SIZE];
    int mergedArray[MAX_SIZE * 2];  // Maximum possible size when combining two arrays
    int size1, size2, mergedSize;

    printf("Enter the size of the first array (up to %d): ", MAX_SIZE);
    scanf("%d", &size1);

    if (size1 <= 0 || size1 > MAX_SIZE) {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array (up to %d): ", MAX_SIZE);
    scanf("%d", &size2);

    if (size2 <= 0 || size2 > MAX_SIZE) {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    mergeArrays(array1, size1, array2, size2, mergedArray, &mergedSize);

    printf("Merged array: ");
    printArray(mergedArray, mergedSize);

    bubbleSortAscending(mergedArray, mergedSize);

    printf("Sorted array in ascending order: ");
    printArray(mergedArray, mergedSize);

    return 0;
}
