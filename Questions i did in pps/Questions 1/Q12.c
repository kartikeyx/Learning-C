#include <stdio.h>
int main()
{
    int n, i, s=0;
    printf("Enter a number upto which you want the sum of numbers: ");
    scanf("%d", &n);

    while(i<=n)
    {
        s+=i;
        i++;
    }
    
    printf("Sum = %d", s);
    return 0;
}