#include <stdio.h>

#define MAX_SIZE 100

int countNegativeElements(int array[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int array[MAX_SIZE];
    int size;

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

    int negativeCount = countNegativeElements(array, size);

    printf("Total number of negative elements: %d\n", negativeCount);

    return 0;
}
