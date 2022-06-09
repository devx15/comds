#include <stdio.h>
int main()
{
    int n, m, i = 0, j = 0;

    printf("enter the number of rows and column u want");
    scanf("%d %d", &n, &m);
    int array1[n][m], array2[n][m];

    printf("enter the values of array1\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    printf("enter the values of array2\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("summation is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}