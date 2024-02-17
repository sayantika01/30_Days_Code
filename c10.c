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

    int pos, x;
    //x---> Element to be inserted
    //pos--->Position where element to be inserted
    printf("Enter the element to be inserted= ");
    scanf("%d",&x);

    printf("Enter the position where to be inserted= ");
    scanf("%d",&pos);
    
    //Element shift

    for(i=n-1;i>=pos;i--)
    {
            a[i+1]=a[i];

    }

    a[pos]=x;
    n=n+1;

    // printing array

    printf("The array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}