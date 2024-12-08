#include <stdio.h>
int main()
{
    int matrix[4][4];
    int min = __INT_MAX__;

    printf("Enter the elements of matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
        printf("\n");
    }

    if (min % 2 == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            matrix[i][i] = min;
        }
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            matrix[i][4 - i - 1] = min;
        }
    }

    printf("\nDisplaying new matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


