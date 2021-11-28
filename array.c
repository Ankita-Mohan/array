#include <stdio.h>

int main()
{
    int array[3][3], i, j;
    printf("Input elements in the matrix: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("elements-[%d],[%d]: \n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The matrix is:\n");
    int *pointer = &array[0][0];
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", *((pointer + i * 3) + j));
        printf("\n");
    }
    int s1 = 0, s2 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (i == j)
                s1 = s1 + array[i][j];
            else if (i + j == 2)
                s2 = s2 + array[i][j];
        }
    }
    printf("Sum of left diagonals of array: %d \n", s1);
    printf("Sum of right diagonals of array: %d", s2);
    return 0;
}
//created by Ankita
