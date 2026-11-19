//Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int A[6];
    int i, count1 = 0, count2 = 0;
    printf("Enter the elements: ");
    for(i = 0; i < 6; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 6; i++) {
if(A[i] % 2 == 0) {
    count1 = count1 + 1;
} else{
    count2 = count2 +1;
}


    }
    printf("Even element is %d", count1);
    printf("Odd element is %d", count2);
    return 0;
}