#include<stdio.h>
int main(){
    int m,n;
    printf("enter the rows and columns of the 1st matrix:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("enter the elements of the 1st matrix:\n");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p,q;
    printf("enter the rows and columns of the 2nd matrix:");
    scanf("%d%d",&p,&q);
    int brr[p][q];
    printf("enter the elements of the 2nd matrix:\n");
    for(int i=1;i<=p;i++){
        for(int j=1;j<=q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
   
        int res[m][q];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=q;j++){
                res[i][j]=0;
                for(int k=1;k<=n;k++){
                    res[i][j] = arr[i][k]+brr[k][j];
                }
            }
        }
        printf("the resultant matrix is :\n");
        for(int i=1;i<=m;i++){
            for(int j=1;j<=q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}