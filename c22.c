#include<stdio.h>
int main()
{
    int n=5,m=3; //n---> student; m--->subject
    int a[n][m];
    int i,j;

    for(i=0;i<n;i++)
    {
        printf("Enter the marks obtained by student %d= ",i+1);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }

    //printing max_marks
    for(j=0;j<m;j++)
    {
        int max_marks=-999;
        for(i=0;i<n;i++)
        {
            if(a[i][j]>max_marks)
            max_marks=a[i][j];
        }
        printf("\nThe highest marks obtained in the %d th subject= %d ",j+1,max_marks);
    }

    return 0;
}