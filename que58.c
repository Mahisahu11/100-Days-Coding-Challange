//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int A[6];
    int i;
    printf("How many elements: ");
    for(i = 0; i < 6; i++) {
        
        scanf("%d", &A[i]);
    }
    int max = A[0], min = A[0];
for(i = 0; i < 6; i++) {
    if(max < A[i]) {
       max = A[i];
    
    }
} if(min > A[i]){
    min = A[i];
}
    printf("Minimum element is %d", min);
    printf("Maximum is: %d", max);
    return 0;
}

