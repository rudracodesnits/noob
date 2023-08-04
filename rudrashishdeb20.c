#include <stdio.h>
int main()
{
    int n;
    for (int i = 1; i <= 5; i++)
    {
        printf("\t\t\t\t\t");
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}