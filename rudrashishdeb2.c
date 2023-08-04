#include<stdio.h>
int main(){
    int m,n,a,p;
    printf("enter the length and breadth: ");
    scanf("%d%d",&m,&n);
    a=m*n;
    p=2*(m+n);
    printf("the required area and perimeter of the given rectangle is %d and %d",a,p);
    return 0;
}