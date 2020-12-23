//To check if a number is a prime number or not
#include <stdio.h>
int isprime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n % i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a;
    printf("Enter a number to check whether the number is a prime number or not: \n");
    scanf("%d", &a);
    int prime = isprime(a);
    if(prime==1)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not a prime number", a);
    }
    return 0;
}