#include <math.h>
#include <stdio.h>
double squareroot(double n)
{
    double sq = sqrt(n);
    return sq;
}
double main()
{
    double a, result;
    printf("Enter a number to find its square root: \n");
    scanf("%lf", &a);
    result = squareroot(a);
    printf("The square root of entered number is %.2lf", result);
    return 0;
}