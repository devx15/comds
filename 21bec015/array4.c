#include <stdio.h>
int main()
{
    int array[5];
    printf("enter the value of array elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}