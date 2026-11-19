//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main()
{
char str[100];
int i, lastSpace = 0;

printf("Enter name: ");
fgets(str, sizeof(str), stdin);

    
for (i = 0; str[i] != '\0'; i++)
{
    if (str[i] == ' ')
    {
     lastSpace = i;
    }
}

    
printf("%c.", str[0]);

for (i = 0; i < lastSpace; i++)
 {
    if (str[i] == ' ')
     {
        printf("%c.", str[i + 1]);
     }
    

    
 printf(" ");

for (i = lastSpace + 1; str[i] != '\n' && str[i] != '\0'; i++)
{
     printf("%c", str[i]);
}

return 0;
}
}