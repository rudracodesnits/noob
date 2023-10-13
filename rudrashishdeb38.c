// #include <stdio.h>
// #define MAX_SIZE 100
// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }
// int main() {
//     int array[MAX_SIZE];
//     int size, i;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     if (size <= 0 || size > MAX_SIZE) {
//         printf("Invalid size. Exiting the program.\n");
//         return 0;
//     }

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &array[i]);
//     }
//     printf("Original array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     reverseArray(array, size);
//     printf("Reversed array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     return 0;
// }
// C Program to Reverse an Array by Printing it from The Last Element to the First Element

#include <stdio.h>
#define N 1000

int main() {
    int arr[N];

    int n;
    // Inputting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Inputting the array
    printf("Enter an array: ");
    for (int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    // Printing the reverse of the array
    printf("Reversed array: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}

// reverse array in c
// reverse an array in c
