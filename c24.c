//transpose of 3*3 matrix
#include<stdio.h>
int main()
{
    int n=3,m=3;
    int a[n][m];
    int b[n][m];
    printf("Enter the elements of the matrix:\n ");
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //transposing
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of a matrix:\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d",b[i][j]);
        }
    }

    return 0;
}