// #include <stdio.h>
// void swapValues(int *array, int index1, int index2) {
//     int temp = *(array + index1);
//     *(array + index1) = *(array + index2);
//     *(array + index2) = temp;
// }
// void printArray(int *array, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(array + i));
//     }
//     printf("\n");
// }
// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int size = sizeof(array) / sizeof(array[0]);
//     int index1, index2;

//     printf("Array before swapping: ");
//     printArray(array, size);

//     printf("Enter the indices of the values to swap (0 to %d): ", size - 1);
//     scanf("%d %d", &index1, &index2);

//     if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
//         printf("Invalid indices. Exiting the program.\n");
//         return 0;
//     }

//     swapValues(array, index1, index2);

//     printf("Array after swapping: ");
//     printArray(array, size);

//     return 0;
// }
 /*
     * C program to accept an array of 10 elements and swap 3rd element
     * with 4th element using pointers and display the results.
     */
 
    #include <stdio.h>
    void swap34(float *ptr1, float *ptr2);
    void main()
    {
 
        float x[10];
        int i, n;
 
        printf("enter no of ele:\n");
        scanf("%d", &n);
 
        printf("Enter Elements one by one\n");
        for (i = 0; i < n; i++) 
        {
            scanf("%f", x + i);
        }
 
        /*  Function call:Interchanging 3rd element by 4th */
 
        swap34(x + 2, x + 3);
        printf("\nResultant Array...\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%d = %f\n", i, x[i]);
        }
 
    }
 
    /*  Function to swap the 3rd element with the 4th element in the array */
 
    void swap34(float *ptr1, float *ptr2 ) 
    {
 
        float temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
 
    }