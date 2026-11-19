//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int mat[100][100];
    int rows, cols;
    int i, j, d;

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

    for (d = 0; d <= rows + cols - 2; d++)
    {
        for (i = rows - 1; i >= 0; i--)
        {
            j = d - i;

            if (j >= 0 && j < cols)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}