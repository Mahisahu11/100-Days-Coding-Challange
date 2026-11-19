//Q57: Find the sum of array elements.
#include <stdio.h>
int main() {
    int A[4];
    int i, a, sum = 0;
    printf("Enter the elements: ");
    for(i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }
for(i = 0; i < 4; i++) {
    sum = sum + A[i];
    

}
printf("Sum of elements is: %d", sum);

}