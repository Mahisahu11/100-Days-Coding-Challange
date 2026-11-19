//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int A[6];
    int i, a, pos = 5;

    printf("Enter 5 sorted elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &a);

    // Find appropriate position
    for(i = 0; i < 5; i++)
    {
        if(a < A[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = 4; i >= pos; i--)
    {
        A[i + 1] = A[i];
    }

    // Insert the element
    A[pos] = a;

    // Print the new array
    for(i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
