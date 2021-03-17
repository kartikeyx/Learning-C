//Write a program to calculate Area nd circumference of a circle.
#include <stdio.h>
int main()
{
    double r,a,c;
    printf("Enter radius of the circle = ");
    scanf("%lf", &r);
    
    a = 3.14*r*r;
    c = 2*3.14*r;

    printf("Area of the circle: %.2lf", a);
    printf("\nCircumference = %.2lf", c);
    
    return 0;
}