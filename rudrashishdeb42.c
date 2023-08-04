#include <stdio.h>
#define MAX_SIZE 100

int removeDuplicates(int array[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    int resultIndex = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] != array[resultIndex]) {
            resultIndex++;
            array[resultIndex] = array[i];
        }
    }

    return resultIndex + 1;
}
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main() {
    int array[MAX_SIZE];
    int size;
    printf("Enter the size of the array: ");
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
    printf("Original array: ");
    printArray(array, size);

    int newSize = removeDuplicates(array, size);
    printf("Array after removing duplicates: ");
    printArray(array, newSize);

    return 0;
}
