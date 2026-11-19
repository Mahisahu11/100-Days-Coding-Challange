//Q68: Delete an element from an array.
#include <stdio.h>
int main() {
    int A[5];
    int i, a, var;
    printf("Enter the elements: ");
    for(i = 0; i < 5; i++) {
scanf("%d", &A[i]);
    }
    printf("Enter the element you want to delete: ");
    scanf("%d", &a);
    for(i = 0; i < 5; i++) {
        if(A[i] == a) {
            var = i;
            break;
        }
    }
    for(i = var; i < 4; i++) {
        A[i] = A[i + 1];
    }
    for(i = 0; i < 4; i++) {
        printf("%d\t", A[i]);
    }
    return 0;
}