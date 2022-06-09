#include <stdio.h>
int main()
{
    int n;
    printf("enter the totel number of variables\n");
    scanf("%d", &n);
    int marks[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("enter the value of %d element of the array is %d\n", i, marks[i]);
    }

    return 0;
}