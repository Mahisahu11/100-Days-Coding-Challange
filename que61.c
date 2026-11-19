//Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int A[7];
    int i, a, count = 0, index;
    printf("Enter the elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    printf("The element to search for: ");
    scanf("%d", &a);
    for(i = 0; i < 5; i++) {
        if(A[i] == a){
            count = count + 1;
            index = i;
        } else{
            count = count;
        }
            
        }
        if(count > 0) {
            printf("%d has been found in %d",a, index);
        } else{
            printf("Not found");
        }
        return 0;
    }
    
