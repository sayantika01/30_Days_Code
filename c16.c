#include<stdio.h>
void readarray(int a[],int n){
    printf("Enter the elements of the array:");
    int i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}

int smallest_of_array(int a[],int n)
{
    int small=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    return small;
}
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    int a[n];
    readarray(a,n);
    printf("Printing smallest number:\n");
    int smallest=smallest_of_array(a,n);
    printf("The smallest element of the array is:%d",smallest);
    
    return 0;

}