#include <stdio.h>

#define MAX_SIZE 100

void sort2DArray(int array[][MAX_SIZE], int rows, int cols) {
    int totalElements = rows * cols;
    int temp;

    // Convert 2D array into a 1D array for sorting
    int tempArray[MAX_SIZE * MAX_SIZE];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tempArray[i * cols + j] = array[i][j];
        }
    }

    // Sort the 1D array in ascending order
    for (int i = 0; i < totalElements - 1; i++) {
        for (int j = 0; j < totalElements - i - 1; j++) {
            if (tempArray[j] > tempArray[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = tempArray[j];
                tempArray[j] = tempArray[j + 1];
                tempArray[j + 1] = temp;
            }
        }
    }

    // Convert the sorted 1D array back to a 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = tempArray[i * cols + j];
        }
    }
}

void print2DArray(int array[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows (up to %d): ", MAX_SIZE);
    scanf("%d", &rows);

    printf("Enter the number of columns (up to %d): ", MAX_SIZE);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid size. Exiting the program.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Original array:\n");
    print2DArray(array, rows, cols);

    sort2DArray(array, rows, cols);

    printf("Sorted array:\n");
    print2DArray(array, rows, cols);

    return 0;
}
