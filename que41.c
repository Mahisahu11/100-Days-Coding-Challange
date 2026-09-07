#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, divisor, middle, result;

    scanf("%d", &n);

    digits = (int)log10(n);
    divisor = (int)pow(10, digits);

    first = n / divisor;
    last = n % 10;

    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("%d", result);

    return 0;
}