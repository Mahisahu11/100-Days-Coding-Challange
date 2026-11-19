//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int mat[100][100];
    int rows, cols, i, j;
    int sum = 0;

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
        sum = sum + mat[i][i];
    }

    printf("%d", sum);

    return 0;
}