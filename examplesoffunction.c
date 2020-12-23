//Find the power of a number
#include <stdio.h>
#include <math.h>
double power(double b, double e)
{
    double p = pow(b,e);
    return p;    
}
double main()
{
    double b1, e1, result;
    printf("Enter base: \nEnter exponent: \n");
    scanf("%lf%lf", &b1, &e1);
    result = power(b1, e1);
    printf("Result = %lf", result);
    return 0;
}