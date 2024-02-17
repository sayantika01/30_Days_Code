//read and display a 2D matrix
#include<stdio.h>
int main()
{
    int n,m; //n---> rows; m--->columns
    printf("Enter the number of rows= ");
    scanf("%d",&n);
    printf("\n Enter the number of columns= ");
    scanf("%d",&m);
    int a[n][m];
    int i,j;

    printf("Enter the elements of the matrix:\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        } 
        printf("\n");
    }
    //printing the matrix
    printf("The elements of the matrix:\n ");
    for(i=0;i<n;i++)
    {
        printf("\n"); 
        for(j=0;j<m;j++)
        {
           printf("%d ",a[i][j]);
        } 
        printf("\n");
    }


    return 0;
}