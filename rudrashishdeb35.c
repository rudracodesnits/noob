// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter a:");
//     scanf("%d",&a);
//     int b;
//     printf("enter b:");
//     scanf("%d",&b);
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("the value of a is %d\n",a);
//     printf("the value of a is %d",b);
    
    
//     return 0;
// }
#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter values for a and b\n");  
    scanf("%d%d", &a, &b);  
  
    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("\nAfter swapping: a = %d and b = %d\n", x, y);  
}  