//illustrates the use of a pointer to a three-dimensional array
#include <stdio.h>
int main()
{
int i,j,k;
int arr[2][2][2];
int (*p_a)[2][2]= arr;

//Accepting the elements
printf("\n Enter the elements of a 2 * 2 * 2 array: ");

for(i = 0; i < 2; i++)
{
    printf("\n");
    for(j = 0; j < 2; j++)
    {
        printf("\n");
        for(k = 0; k < 2; k++)
            scanf("%d", &arr[i][j][k]);
    }
}
//printing the array
printf("\n The elements of the 2 * 2 * 2 array are: ");
for(i = 0; i < 2; i++)
{
    printf("\n");
    for(j = 0; j < 2; j++)
    {
        printf("\n");
        for(k = 0; k < 2; k++)
            printf("%d\t", *(*(*(p_a+i)+j)+k));
    }
}
return 0;
}