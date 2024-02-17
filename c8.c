#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    int i;

    // Array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c=0;
    int j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j] && i!=j)
            c++;
            
        }
    }
    if(c!=0)
    printf("Duplicate numbers are there.");
    printf("There are %d duplicate numbers.",c);
    //printf("There are duplicate numbers at %d and %d position.",i,j);
return 0;
}