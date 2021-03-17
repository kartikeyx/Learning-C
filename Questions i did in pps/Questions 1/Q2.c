//Write a program to find out simple interest and compound interest.
#include <stdio.h>
#include <math.h>
int main()
{
    double p,r,t,si,ci;
    printf("Enter principal amount: ");
    scanf("%lf", &p);
    printf("Enter rate of interest: ");
    scanf("%lf", &r);
    printf("Enter time (in years): ");
    scanf("%lf", &t);
    
    si = (p*r*t)/100.0;
    ci = p*(pow(1+r/100.0, t)-1);
    printf("Simple interest = %.2lf", si);
    printf("\nCompound interest = %.2lf", ci);

    return 0;
}
