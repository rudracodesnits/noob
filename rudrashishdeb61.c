#include <stdio.h>
void swapValues(int *array, int index1, int index2) {
    int temp = *(array + index1);
    *(array + index1) = *(array + index2);
    *(array + index2) = temp;
}
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int index1, index2;

    printf("Array before swapping: ");
    printArray(array, size);

    printf("Enter the indices of the values to swap (0 to %d): ", size - 1);
    scanf("%d %d", &index1, &index2);

    if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
        printf("Invalid indices. Exiting the program.\n");
        return 0;
    }

    swapValues(array, index1, index2);

    printf("Array after swapping: ");
    printArray(array, size);

    return 0;
}
