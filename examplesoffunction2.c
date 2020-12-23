//Add and multiply two numbers
#include <stdio.h>
double add(double n1, double n2)
{
    double sum = n1+n2;
    return sum;
}
double multiply(double m1, double m2)
{
    double pro= m1*m2;
    return pro;
}
double main()
{
    double a,b;
    printf("Enter two numbers for addition and multiplication: ");
    scanf("%lf%lf", &a,&b);
    double addi = add(a,b);
    double p = multiply(a,b);
    printf("Addition= %lf", addi);
    printf("Multiplication = %lf", p);
    return 0;
}