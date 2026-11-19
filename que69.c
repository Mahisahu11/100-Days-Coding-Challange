//Q69: Find the second largest element in an array.
#include <stdio.h>
int main() {
    int A[5];
    int i, a;
    printf("Enter the elements: ");
    for (i = 0; i < 5; i++)
 {
    scanf("%d", &A[i]);
 }
 int max = A[0];
 int max_2 = A[0];
 for(i = 0; i < 5; i++) {
    if(max < A[i]) {
        max_2 = max;
        max = A[i];
        
    } 
    }
 
if(max_2 < max) {
    max_2 = A[i];
}
    
 
 printf("The second largest number is: %d", max_2);
 return 0;
}