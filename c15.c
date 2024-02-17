#include<stdio.h>
int main()
{
     int n,m;

    printf("Enter the number of elements in array1:");
    scanf("%d", &n);
    printf("Enter the number of elements in array2:");
    scanf("%d", &m);
    
    int a1[n],a2[m];
    int i,j;

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
int k=0;
i=0,j=0;
    while(i<n && j<m ){
        if(a1[i]<a2[j]){
            a3[k]=a1[i];
            i++;
        }
        else{
            a3[k]=a2[j];
            j++;
        }
        k++;
    }
    if(i == n)
    {
        while(j<m)
        {
        a3[k] = a2[j];
        j++;
        k++;
        }
    }
    else if(j == m)
    {
        while(i<n)
        {
            a3[k] = a1[i];
            i++;
            k++;
        }
    }
    for(i=0;i<t;i++){
        printf("%d ",a3[i]);
    }
    return 0;
}