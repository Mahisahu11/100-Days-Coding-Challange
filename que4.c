//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h> 

int main(){
    float r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = 3.14159 * r * r;
    circumference = 2 * 3.14159 * r;
    printf("Area of the circle is: %f\n", area);
    printf("Circumference of the circle is: %f\n", circumference);
    return 0;
}