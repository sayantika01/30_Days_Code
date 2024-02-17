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
    
    printf("Enter the element to be inserted= ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            for(int j=n-1;j>=i;j--)
            {
                a[j+1]=a[j];
            }
            a[i]=x;
            break;
            
        }
    }
    n=n+1;

    // printing array

    printf("The array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}