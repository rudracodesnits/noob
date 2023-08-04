#include <stdio.h>

int main() {
    int num, largest, count = 0;

    // Input and initialization
    printf("Enter 6 integers:\n");

    while (count < 6) {
        scanf("%d", &num);
        largest = (count == 0) ? num : ((num > largest) ? num : largest);
        count++;
    }

    // Output
    printf("The largest number is: %d\n", largest);

    return 0;
}
