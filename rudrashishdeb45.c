// #include <stdio.h>

// #define MAX_SIZE 100

// void copyArray(int source[], int destination[], int size) {
//     for (int i = 0; i < size; i++) {
//         destination[i] = source[i];
//     }
// }

// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int source[MAX_SIZE];
//     int destination[MAX_SIZE];
//     int size;

//     printf("Enter the size of the array (up to %d): ", MAX_SIZE);
//     scanf("%d", &size);

//     if (size <= 0 || size > MAX_SIZE) {
//         printf("Invalid size. Exiting the program.\n");
//         return 0;
//     }

//     printf("Enter the elements of the source array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &source[i]);
//     }

//     printf("Source array: ");
//     printArray(source, size);

//     copyArray(source, destination, size);

//     printf("Destination array (after copying): ");
//     printArray(destination, size);

//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    printf("size:");
    scanf("%d",&n);
    int arr[n];
    printf("elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }
    printf("copied array:");
    for(int i=0;i<n;i++){
        printf("%d",brr[i]);
    }
    printf("\n");
    return 0;
}