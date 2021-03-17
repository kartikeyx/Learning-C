//A program to check if the entered numbers by user are equal or not.
#include <stdio.h>
int main()
{
    double a,b;
    printf("Enter two numbers to check if they are equal or not: ");
    scanf("%lf%lf", &a, &b);

    if(a==b)
    printf("Entered numbers are equal.");
    else
    printf("Entered numbers are not equal.");

    return 0;
}