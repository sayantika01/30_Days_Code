#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    printf("Enter the number of columns: ");
    scanf("%d",&m);

    int a[n][m], b[n][m], c[n][m];

    printf("Enter the elements of the 1st matrix:\n ");
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n ");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
//multiplying the two matrix
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(int k=0;k<m;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("The elements of the resultant matrix:\n ");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
    
    return 0;
}