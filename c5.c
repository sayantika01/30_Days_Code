#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];int i;

    //Array elements
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int small=a[0];
    int pos=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
    
    printf("The smallest element is %d at position %d",small,pos);
    

    return 0;
}