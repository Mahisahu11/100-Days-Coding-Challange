//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    float L, B, A, P;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &L);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &B);
    A = L*B;
    P = 2*(L+B);
    printf("Area of the rectangle is: %f", A);
    printf(" Perimeter of the rectangle is: %f", P);
    return 0;
}