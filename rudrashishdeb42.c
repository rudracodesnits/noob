// #include <stdio.h>
// #define MAX_SIZE 100

// int removeDuplicates(int array[], int size) {
//     if (size == 0 || size == 1) {
//         return size;
//     }

//     int resultIndex = 0;

//     for (int i = 1; i < size; i++) {
//         if (array[i] != array[resultIndex]) {
//             resultIndex++;
//             array[resultIndex] = array[i];
//         }
//     }

//     return resultIndex + 1;
// }
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int array[MAX_SIZE];
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     if (size <= 0 || size > MAX_SIZE) {
//         printf("Invalid size. Exiting the program.\n");
//         return 0;
//     }

//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &array[i]);
//     }
//     printf("Original array: ");
//     printArray(array, size);

//     int newSize = removeDuplicates(array, size);
//     printf("Array after removing duplicates: ");
//     printArray(array, newSize);

//     return 0;
// }
#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    int arr[20], i, j, k, size;  
      
    printf ("number of ele: ");  
    scanf ("%d", &size);  
      
    printf ("\nEnter %d ele: \n ", size);  

    for ( i = 0; i < size; i++) {  
        scanf ("%d", &arr[i]);  
    }  
     
    for ( i = 0; i < size; i ++) {  
        for ( j = i + 1; j < size; j++) {
            if ( arr[i] == arr[j]) {    
                for ( k = j; k < size - 1; k++) {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
    printf ("\nArray after: ");  
    for ( i = 0; i < size; i++) {  
        printf ("%d ", arr[i]);  
    }  
    return 0;  
}  