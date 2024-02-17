#include<stdio.h>
int main()
{
     int n;

    printf("Enter the number of elements:");
    scanf("%d", &n);
    
    int a[n];
    int i;

    // Array elements
    printf("Enter the elements of the array:\n");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    //x---> Element to be inserted
    
    printf("Enter the element to be deleted= ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }  
        }
    }
    n=n-1;

    // printing array

    printf("The array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}