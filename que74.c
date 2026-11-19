//Find the transpose of a matrix.
#include <stdio.h>

int main()
{
int mat[100][100], trans[100][100];
int rows, cols, i, j;

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
    for (j = 0; j < cols; j++)
    {
        trans[j][i] = mat[i][j];
    }
}

printf("Transpose:\n");

for (i = 0; i < cols; i++)
{
    for (j = 0; j < rows; j++)
    {
        printf("%d ", trans[i][j]);
    }

    printf("\n");
}

return 0;
}
    

    