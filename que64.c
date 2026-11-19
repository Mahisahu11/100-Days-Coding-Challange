//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {



    int num, rem, i;
    int count[10] = {0};
    int max, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    while(num > 0)
    {
        rem = num % 10;
        count[rem]++;
        num = num / 10;
    }

    
    max = count[0];
    digit = 0;

    
    for(i = 1; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }

    printf("Digit occurring most times is: %d", digit);

    return 0;
}