//Check if one string is rotation of another string

#include <stdio.h>
#include <string.h>

int main()
{
char str1[100], str2[100], temp[200];
int i, j, found = 0;
int len1, len2;

printf("Enter first string: ");
scanf("%s", str1);

printf("Enter second string: ");
scanf("%s", str2);

len1 = strlen(str1);
len2 = strlen(str2);

if (len1 != len2)
{
printf("Not rotation");
return 0;
    }

    
for (i = 0; i < len1; i++)
{
temp[i] = str1[i];
temp[i + len1] = str1[i];
    }

temp[2 * len1] = '\0';

    
for (i = 0; i < len1; i++)
    {
    for (j = 0; j < len2; j++)
    {
        if (temp[i + j] != str2[j])
        {
             break;
        }
     }

    if (j == len2)
     {
        found = 1;
        break;
     }
    }

if (found == 1)
    printf("Rotation");
else
    printf("Not rotation");

    return 0;
}