#include<stdio.h>
int main()
{
     int n,m;

    printf("Enter the number of elements in array1:");
    scanf("%d", &n);
    printf("Enter the number of elements in array2:");
    scanf("%d", &m);
    
    int a1[n],a2[m];
    int i;

    // Array elements
    printf("Enter the elements of the array1:\n");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("Enter the elements of the array2:\n");
    
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a2[i]);
    }
    int t=n+m;
    int a3[t];
    int j;
    for(i=0;i<n;i++)
    {
            a3[i]=a1[i];  
    } 
    
    for ( i = 0, j = n;j < t && i < m;i++, j++)    
    {
        a3[j]=a2[i];
    } 

    for(i=0;i<t;i++){
        printf("%d ",a3[i]);
    }
    return 0;
}