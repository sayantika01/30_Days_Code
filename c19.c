#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("\nEnter the number of columns: ");
    scanf("%d", &n);

    int a[m][n];
    int i, j;
    printf("Enter the elements of the array:");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int *ptr, *ptr1;
    ptr = &a[0][0];
    ptr1 = &a[m - 1][n - 1];

    printf("The 2D array is:\n ");
    //while (ptr <= ptr1) {
        for(i=0;i<n;i++){
        printf("%d ", *ptr);
        ptr++;
        }
        printf("\n");
    //}

    return 0;
}
// #include <stdio.h>

// int main() {
//     int m, n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("\nEnter the number of columns: ");
//     scanf("%d", &n);

//     int a[m][n];
//     int i, j;
//     printf("Enter the elements of the array:");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int **ptr=&a;

//     printf("The 2D array is:\n ");
//     for(int i=0;i<m;i++){
//         for(j=0;j<n;j++){
//         printf("%d ", *ptr);
//         ptr++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int m, n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("\nEnter the number of columns: ");
//     scanf("%d", &n);

//     int a[m][n];
//     int i, j;
//     printf("Enter the elements of the array:");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int *ptr, *ptr1;
//     ptr = &a[0][0];
//     ptr1 = &a[m - 1][n - 1];

//     printf("The 2D array is:\n ");
//     while (ptr <= ptr1) {
//         for(i=0;i<n;i++){
//         printf("%d ", ptr[i][j]);
//         ptr++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int m, n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &m);
//     printf("\nEnter the number of columns: ");
//     scanf("%d", &n);

//     int a[m][n];
//     int i, j;
//     printf("Enter the elements of the array:");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int *ptr = &a[0][0];
//     int *ptr1 = &a[m - 1][n - 1];

//     printf("The 2D array is:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d ", *ptr);
//             ptr++;
//         }
//         printf("\n");
//     }

//     return 0;
// }