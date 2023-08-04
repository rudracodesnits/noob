#include <stdio.h>
int multiply(int num1, int num2) {
    int result = 0;
    int sign = 1;

    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0))
        sign = -1;
    num1 = (num1 < 0) ? -num1 : num1;
    num2 = (num2 < 0) ? -num2 : num2;

    while (num2 > 0) {
        result += num1;
        num2--;
    }
    return (sign == -1) ? -result : result;
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    int product = multiply(number1, number2);

    printf("The product of the two numbers is: %d\n", product);

    return 0;
}
