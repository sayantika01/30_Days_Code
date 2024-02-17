// //printing pascals triangle;
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the pascal's triangle");
//     scanf("%d",&n);
//     int i,j,k;
//     for(i=0;i<n;i++)
//     {
//         for(j=n;j>=i;j--)
//         {
//             printf(" ");
//         }
//         int a=1;
//         for(k=0;k<n;k++)
//         {
//              printf("%4d",a);
//                 a=a*(i-k)/k;
//         }
//          printf(" \n");

//     }
//     return 0;
// }
#include <stdio.h>
void printPascal(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        // used to represent C(line, i)
        int a = 1;
        for (int k = 1; k <= i; k++) {
            // The first value in a line
            // is always 1
            printf("%4d", a);
            a = a * (i - k) / k;
        }
        printf("\n");
    }
}
  
// Driver code
int main()
{
    int n=5;
    // printf("Enter the size of triangle: ");
    // scanf("%d",&n);
    printPascal(n);
    return 0;
}