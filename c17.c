#include<stdio.h>
#include<conio.h>
void readarray(int a[],int n)
{
    printf("Enter the elements of the array:");
    int i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    printf("The array is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
int biggest_pos(int a[],int n)
{
    int big=a[0];
    int i,pos=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
            pos=i;
        }
    }
    return pos;
}
int smallest_pos(int a[],int n)
{
    int small=a[0];
    int i,pos=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            pos=i;
        }
    }
    return pos;
}
void interchange(int a[],int n)
{
    int big_pos=biggest_pos( a, n);
    int small_pos=smallest_pos( a, n);
    //swap
    int temp=a[big_pos];
    a[big_pos]=a[small_pos];
    a[small_pos]=temp;
}
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    int a[n];
    readarray(a,n);
    interchange(a,n);
    printf("The new array:\n");
    display(a,n);
    return 0;

}