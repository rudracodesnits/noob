#include <stdio.h>

// Function to convert decimal to Roman numeral
void convertToRoman(int num) {
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num <= 0) {
        printf("Roman numerals are not defined for non-positive numbers.\n");
        return;
    }

    printf("Roman numeral representation of %d is: ", num);

    for (int i = 0; num > 0; i++) {
        while (num >= decimalValues[i]) {
            printf("%s", romanNumerals[i]);
            num -= decimalValues[i];
        }
    }

    printf("\n");
}

int main() {
    int num;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Convert and display Roman numeral representation
    convertToRoman(num);

    return 0;
}
/*
 * C Program to Convert Numbers to Roman Numerals
 */
// #include <stdio.h>
 
// void predigit(char num1, char num2);
// void postdigit(char c, int n);
 
// char romanval[1000];
// int i = 0;
// int main()
// {
//     int j;
//     long number;
 
//     printf("Enter the number: ");
//     scanf("%d", &number);
//     if (number <= 0)
//     {
//         printf("Invalid number");
//         return 0;
//     }
//     while (number != 0)
//     {
//         if (number >= 1000)
//         {
//             postdigit('M', number / 1000);
//             number = number - (number / 1000) * 1000;
//         }
//         else if (number >= 500)
//         {
//             if (number < (500 + 4 * 100))
//             {
//                 postdigit('D', number / 500);
//                 number = number - (number / 500) * 500;
//             }
//             else
//             {
//                 predigit('C','M');
//                 number = number - (1000-100);
//             }
//         }
//         else if (number >= 100)
//         {
//             if (number < (100 + 3 * 100)) 
//             {
//                 postdigit('C', number / 100);
//                 number = number - (number / 100) * 100;
//             }
//             else
//             {
//                 predigit('L', 'D');
//                 number = number - (500 - 100);
//             }
//         }
//         else if (number >= 50 )
//         {
//             if (number < (50 + 4 * 10))
//             {
//                 postdigit('L', number / 50);
//                 number = number - (number / 50) * 50;
//             }
//             else
//             {
//                 predigit('X','C');
//                 number = number - (100-10);
//             }
//         }
//         else if (number >= 10)
//         {
//             if (number < (10 + 3 * 10))
//             {
//                 postdigit('X', number / 10);
//                 number = number - (number / 10) * 10;
//             }
//             else
//             {
//                 predigit('X','L');
//                 number = number - (50 - 10);
//             }
//         }
//         else if (number >= 5)
//         {
//             if (number < (5 + 4 * 1))
//             {
//                 postdigit('V', number / 5);
//                 number = number - (number / 5) * 5;
//             }
//             else
//             {
//                 predigit('I', 'X');
//                 number = number - (10 - 1);
//             }
//         }
//         else if (number >= 1)
//         {
//             if (number < 4)
//             {
//                 postdigit('I', number / 1);
//                 number = number - (number / 1) * 1;
//             }
//             else
//             {
//                 predigit('I', 'V');
//                 number = number - (5 - 1);
//             }
//         }
//     }
//     printf("Roman number is: ");
//     for(j = 0; j < i; j++)
//         printf("%c", romanval[j]);
//     return 0;
// }
 
// void predigit(char num1, char num2)
// {
//     romanval[i++] = num1;
//     romanval[i++] = num2;
// }
 
// void postdigit(char c, int n)
// {
//     int j;
//     for (j = 0; j < n; j++)
//         romanval[i++] = c;
// }