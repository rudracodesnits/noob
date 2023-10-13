#include<stdio.h>
int main(){
    int i,j;
    int k=0;
    for(i=5;i>=1;i--){
        printf("\t\t\t");
        for(j=1;j<=k;j++){
            printf(" ");
        }
        k++;
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}