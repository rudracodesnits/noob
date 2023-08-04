#include <stdio.h>
int main() {
    int height, width, mid, i, j;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    width = 2 * height - 1;
    mid = width / 2;
    for (i = 0; i < height; i++) {
        printf("\t\t\t\t\t");
        for (j = 0; j < width; j++) {
            if (i == height - 1 || j == mid - i || j == mid + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
