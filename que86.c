//Check if a string is a palindrome.
#include <string.h>

int main()
{
    char str[100];
    int start = 0, end;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    end = strlen(str) - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (palindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}