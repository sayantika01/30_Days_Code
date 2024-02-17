#include <stdio.h>
#include <stdlib.h>
int **allocate(int r, int c)
{
    int **matrix = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        matrix[i] = (int *)malloc(c * sizeof(int));
    }
    return matrix;
}
void display(int **m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
}
void input_matrix(int **m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d] -> ", i + 1, j + 1);
            scanf(" %d ", &m[i][j]);
        }
    }
}
void multiply_matrix(int **a, int **b, int **result, int r1, int c1, int c2)
{
    // int **result = allocate(r1, c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // return result;
}
int main()
{
    int r1, r2, c1, c2;
    printf("\nMATRIX->1\n");
    printf("Enter the number of rows:");
    scanf("%d", &r1);
    printf("\nEnter the number of columns:");
    scanf("%d", &c1);
    printf("\nMATRIX->2\n");
    printf("Enter the number of rows:");
    scanf("%d", &r2);
    printf("\nEnter the number of columns:");
    scanf("%d", &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    int **m1, **m2, **result;
    m1 = allocate(r1, c1);
    m2 = allocate(r2, c2);
    // m1 = allocate(r1, c1);
    result = allocate(r1, c2);
    input_matrix(m1, r1, c1);
    display(m1, r1, c1);
    input_matrix(m2, r2, c2);
    display(m2, r2, c2);
    multiply_matrix(m1, m2, result, r1, c1, c2);
    display(result, r1, c2);
    return 0;
}