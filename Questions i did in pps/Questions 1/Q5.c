#include <stdio.h>
int main()
{
    double n1,n2,temp;
    printf("Enter two numbers to swap: ");
    scanf("%lf%lf", &n1, &n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    
    printf("After swapping first number is %.2lf \nSecond number is %.2lf", n1, n2);

    return 0;
}