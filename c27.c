#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    printf("Enter the number of columns: ");
    scanf("%d",&m);

    int a[n][m], b[n][m];

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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
            }
            else if(i!=j && j>i)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=(-1);
            }
            

        }
    }

    /*o fill a square matrix with value zero on the diagonals, 1 on the upper 
right triangle, and –1 on the lower left triangle*/
    printf("The elements of the resultant matrix:\n ");
    // for(i=0;i<n;i++)
    // {
    //     printf("\n");
    //     for(j=0;j<m;j++)
    //     {
    //         printf(" %d ",a[i][j]);
    //     }
    // }
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {
            printf("   %d    ", a[i][j]);
        }
        printf("\n");
    }

return 0;
}