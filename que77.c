//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main()
{
    int mat[100][100];
    int rows, cols, i, j;
    int distinct = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < rows; j++)
        {
            if (mat[i][i] == mat[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}