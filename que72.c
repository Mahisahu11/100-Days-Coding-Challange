//Find the sum of all elements in a matrix
#include <stdio.h>

int main()
{
int mat[100][100];
int rows, cols, i, j, sum = 0;

printf("Enter rows and columns: ");
scanf("%d %d", &rows, &cols);

printf("Enter matrix elements:\n");

for (i = 0; i < rows; i++)
{
    for (j = 0; j < cols; j++)
    {
        scanf("%d", &mat[i][j]);
        sum = sum + mat[i][j];
    }
}

printf("Sum = %d", sum);

return 0;
}