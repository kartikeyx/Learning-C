//A program to print fibonacci series.
#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nexterm;
    printf("Enter the number of terms you want in the series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(int i=1; i<= n; ++i)
    {
        printf("%d ", t1);
        nexterm = t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return 0;
}