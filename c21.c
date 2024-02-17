/*In a small company there are five salesmen. 
Each salesman is supposed to sell three
products. Write a program using a 2D array 
to print (i) the total sales by each salesman 
and (ii) total sales of each item*/

#include<stdio.h>
int main()
{
    int n=5,m=3; //n---> salesman; m--->items
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter the sales of 3 products by %d th salesman: ",i+1);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }

    //Printing the total sales by each salesman
    for(i=0;i<n;i++)
    {
        int total_sales=0;
        for(j=0;j<m;j++)
        {
            total_sales+=a[i][j];
        }
        printf("The total sales by %d th salesman= %d \n",i+1,total_sales); 
    }

    //Printing Total sales of each item
    for(i=0;i<m;i++)
    {
        int total_item_sale=0;
        for(j=0;j<n;j++)
        {
            total_item_sale+=a[j][i];
        }
        printf("The total sales of item %d = %d \n",i+1,total_item_sale);
    }

    
    return 0;
}