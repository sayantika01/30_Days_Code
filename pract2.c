#include<stdio.h>
int main(){
    int m,n,i,j,k;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d",&n);

    int a[m][n];
    printf("Enter the elements of the 1st matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int b[m][n];
    printf("Enter the elements of the 2nd matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

     int c[m][n],sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
            sum+=(a[i][k]*b[k][j]);
        }
        c[i][j]=sum;
        sum=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}