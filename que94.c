// Q94: Find the longest word in a sentence.
#include <stdio.h>

int main()
{
char str[100];
int i;
int count = 0, max = 0;
int start = 0, maxStart = 0;

printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);

for (i = 0; ; i++)
{
if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
{
 count++;
}
else
{
if (count > max)
{
 max = count;
 maxStart = start;
 }

count = 0;
start = i + 1;

 if (str[i] == '\0')
 break;
        }
    }

 printf("Longest word: ");

for (i = maxStart; i < maxStart + max; i++)
 {
 printf("%c", str[i]);
}

    return 0;
}