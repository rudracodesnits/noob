#include <stdio.h>
float calculateSeriesSum(int n) {
    float sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    return sum;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value of n. Please enter a positive integer.\n");
        return 0;
    }

    float sum = calculateSeriesSum(n);
    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %.4f\n", n, sum);

    return 0;
}
