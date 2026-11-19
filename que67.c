//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int A[6];
    int i, a, pos;
    printf("Enter the elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
printf("Enter the element to insert: ");
scanf("%d", &a);
printf("Enter the position you want to insert it in: ");
scanf("%d", &pos);

for(i = 4; i >= pos ; i--){
    A[i + 1] = A[i];
} 
A[pos] = a;
for(i = 0; i < 6; i++) {


printf("%d\t", A[i]);
}
return 0;
}