//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int A[5];
    int i, count1 = 0, count2 = 0, count3 = 0;
    printf("Enter the elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 5; i++) {
        if(A[i] > 0) {
count1 = count1 + 1;
        } if(A[i] < 0) {
            count2 = count2 + 1;
        } else if(A[i] == 0) {
            count3 = count3 + 1;
        }
    }
printf("No. of pos no. is %d\n", count1);
printf("No. of neg no. is %d\n", count2);
printf("No. of 0 is %d\n", count3);
return 0;
}