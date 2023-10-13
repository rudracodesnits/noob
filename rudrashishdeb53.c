#include <stdio.h>

#define MAX_SIZE 100

void traverseArray(int array[], int size) {
    printf("Array elements: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main() {
    int array[MAX_SIZE];
    int size;

    printf("Enter the size of the array : ");
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

    traverseArray(array, size);

    return 0;
}
