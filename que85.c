//Q85: Reverse a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int start = 0, end;

    printf("Enter a string: ");
    scanf("%s", str);

    end = strlen(str) - 1;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s", str);

    return 0;
}