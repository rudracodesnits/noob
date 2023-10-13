// #include <stdio.h>
// #define MAX_SIZE 100

// void findMinMax(int array[], int size, int *min, int *max)
// {
//     *min = array[0];
//     *max = array[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (array[i] < *min)
//         {
//             *min = array[i];
//         }

//         if (array[i] > *max)
//         {
//             *max = array[i];
//         }
//     }
// }

// int main()
// {
//     int array[MAX_SIZE];
//     int size, i;
//     int min, max;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < size; i++)
//     {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &array[i]);
//     }

//     findMinMax(array, size, &min, &max);
//     printf("The smallest element in the array is: %d\n", min);
//     printf("The largest element in the array is: %d\n", max);

//     return 0;
// }
#include<stdio.h>

int main()
{
int a[50],i,n,large,small;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nInput the array elements : ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);

return 0;
}