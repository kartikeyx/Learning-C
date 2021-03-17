#include <stdio.h>
int main()
{
    int n, s=0, t1 = 0, t2 = 1, nexterm;
    printf("Enter the number of terms you want in the series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(int i=1; i<= n; ++i)
    {
        printf("%d ", t1);
        nexterm = t1+t2;
        s+=t1;
        t1=t2;
        t2=nexterm;
        
    }
    printf("\nSum of %d terms in fibonacci series is %d", n, s);
    return 0;
}