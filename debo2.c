// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, *arr, search, found = 0;

//     printf("number of ele: ");
//     scanf("%d", &n);

//     arr = (int*)malloc(n * sizeof(int));

//     printf("enter %d ele:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("search: ");
//     scanf("%d", &search);

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == search) {
//             found = 1;
//             printf(" %d found at index %d\n", search, i);
//             break;
//         }
//     }

//     if (!found) {
//         printf("%d not found\n", search);
//     }

//     free(arr);

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int nonZeroCount = 0;
    int rowSum[n];
    int colSum[n];

    for (int i = 0; i < n; i++) {
        rowSum[i] = 0;
        colSum[i] = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    float rowAvg[n];
    float colAvg[n];

    for (int i = 0; i < n; i++) {
        rowAvg[i] = (float)rowSum[i] / n;
        colAvg[i] = (float)colSum[i] / n;
    }

    printf("\nnon-0 ele: %d\n", nonZeroCount);

    printf("\nRow-wise sum and average:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d: Sum = %d, Average = %f\n", i + 1, rowSum[i], rowAvg[i]);
    }

    printf("\nColumn-wise sum and average:\n");
    for (int i = 0; i < n; i++) {
        printf("Column %d: Sum = %d, Average = %f\n", i + 1, colSum[i], colAvg[i]);
    }

    return 0;
}
