//Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int A[5];
    int i, a, low = 0, high = 4, mid;
    
    int found = 0;
    printf("Enter the numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the element you need to find: ");
    scanf("%d", &a);
    while(low <= high){
    mid = (low + high) / 2;
    if(A[mid] == a)
    {
        printf("found at index %d", mid);
    found = 1;
    break;
    }
else if(A[mid] < a)
{ low = mid + 1;
}
else{
    high = mid - 1;
}}
 if(found == 0) {
    printf("-1");
 }
return 0;

}