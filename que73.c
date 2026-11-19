//Find the sum of each row of a matrix and store it in a array.
#include <stdio.h>
int main() {
    int mat[10][10], sum[10], i, j, row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < row; i++)
{ 
    for (j = 0; j < col; j++)
    {
        scanf("%d", &mat[i][j]);
    }
}
for (i = 0; i < row; i++)
{
sum[i] = 0;
for (j = 0; j < col; j++)
{
    sum[i] += mat[i][j];
}
}
printf("The sum of each row is: ");
for (i = 0; i < row; i++)
 {
    printf("%d ", sum[i]);
}
    return 0;
}