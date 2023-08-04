#include <stdio.h>

#define MAX_SIZE 100

void transposeArray(int array[][MAX_SIZE], int rows, int cols, int transposedArray[][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedArray[j][i] = array[i][j];
        }
    }
}

void printArray(int array[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[MAX_SIZE][MAX_SIZE];
    int transposedArray[MAX_SIZE][MAX_SIZE];
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
    printArray(array, rows, cols);

    transposeArray(array, rows, cols, transposedArray);

    printf("Transposed array:\n");
    printArray(transposedArray, cols, rows);

    return 0;
}
