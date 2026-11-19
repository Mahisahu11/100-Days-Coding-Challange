//Q63: Merge two arrays.
#include <stdio.h>
int main() {
    int A[5];
    int B[5];
    int C[10];
    int i, j, p;
    printf("Enter the elements for first array: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    } printf("Enter the elemnts of the second array: ");
    for(j = 0; j < 5; j++) {
scanf("%d", &B[j]);
    }
    for(i = 0, p = 0; i < 5 && p < 5; i++, p++) {
        C[p] = A[i];
    }
    for(j = 0, p = 5; j < 5 && p < 10; j++, p++) {
C[p] = B[j];
    } for(p = 0; p < 10; p++) {
printf("%d\t", C[p]);
    }
    return 0;
    }


    
