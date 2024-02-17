// to read and display a 2*2*2 array
#include<stdio.h>
int main()
{
    int a[2][2][2];
printf("Enter the elements of the matrix:\n ");
    int i,j,k;
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\n");
            for(k=0;k<2;k++)
            {
            scanf("%d",&a[i][j][k]);
            }
        }
    }

//printing the array:
printf("The elements of the matrix:\n ");
    
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("\n");
            for(k=0;k<2;k++)
            {
            printf("%d ",a[i][j][k]);
            }
        }
    }
return 0;
}
