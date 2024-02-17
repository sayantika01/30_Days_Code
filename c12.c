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

    int pos;
    //pos---> deleting position 
    
    printf("Enter the deleting position= ");
    scanf("%d",&pos);

    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;

    // printing array

    printf("The array after deletion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}