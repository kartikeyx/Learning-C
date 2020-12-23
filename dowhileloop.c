#include <stdio.h>
int main()
{
    double n, sum = 0.0;
    do{
        printf("Enter a number: ");
        scanf("%lf", &n);
        sum+= n;
    }
    while(n!=0.0);
    {
        printf("Sum = %.2lf", sum);
    }
    return 0;
}