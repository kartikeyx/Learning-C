//A program to convert celsius to fahreneit.
#include <stdio.h>
int main()
{
    double c,f;
    printf("Enter temperature in celsius = ");
    scanf("%lf", &c);
    
    f=c/0.55556+32;

    printf("Temperature in Fahreneit = %.2lf", f);

    return 0;
}