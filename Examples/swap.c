//A program to swap two numbers without using temporary number.
#include <stdio.h>
int main()
{
    double a,b;
    printf("Enter two numbers to swap: ");
    scanf("%lf%lf", &a, &b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("FIRST NUMBER: %lf \nSECOND NUMBER: %lf", a, b);
    return 0;
}