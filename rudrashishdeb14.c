#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5;
    int largest, secondLargest, thirdLargest;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    largest = num1;
    secondLargest = num2;
    thirdLargest = num3;

    if (num2 > largest) {
        largest = num2;
        secondLargest = num1;
    }

    if (num3 > largest) {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = num3;
    } else if (num3 > secondLargest) {
        thirdLargest = secondLargest;
        secondLargest = num3;
    }

    if (num4 > largest) {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = num4;
    } else if (num4 > secondLargest) {
        thirdLargest = secondLargest;
        secondLargest = num4;
    } else if (num4 > thirdLargest) {
        thirdLargest = num4;
    }

    if (num5 > largest) {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = num5;
    } else if (num5 > secondLargest) {
        thirdLargest = secondLargest;
        secondLargest = num5;
    } else if (num5 > thirdLargest) {
        thirdLargest = num5;
    }

    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", secondLargest);
    printf("Third largest number: %d\n", thirdLargest);

    return 0;
}
