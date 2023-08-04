// #include <stdio.h>

// #define MAX_SIZE 100

// int countDuplicates(int array[], int size) {
//     int count = 0;

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (array[i] == array[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int array[MAX_SIZE];
//     int size;

//     printf("Enter the size of the array (up to %d): ", MAX_SIZE);
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

//     int duplicateCount = countDuplicates(array, size);

//     printf("Total number of duplicate elements in the array: %d\n", duplicateCount);

//     return 0;
// }
#include <stdio.h>
//#include <conio.h>
int main()
{
    //declare array and initialize the variables
    int arr[10000],i,j,n,count=0 ;
    printf("Enter the size of the array- ");
    scanf("%d", &n);
    printf("Enter elements in the array- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }  
    //loops to iterate through the array
    for(i=0; i<n; i++)
    {
      for(j = i + 1; j < n; j++)
      {
        //Condition to check if the element is duplicate or not
        if(arr[i] == arr[j])
        {
          count++;
          break;
        }
      }
    }
    printf("Total duplicate numbers in the array- %d",count);
    return 0;
}