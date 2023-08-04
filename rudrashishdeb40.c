#include <stdio.h>
#define MAX_SIZE 100

void findMinMax(int array[], int size, int *min, int *max)
{
    *min = array[0];
    *max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }

        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
}

int main()
{
    int array[MAX_SIZE];
    int size, i;
    int min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    findMinMax(array, size, &min, &max);
    printf("The smallest element in the array is: %d\n", min);
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
