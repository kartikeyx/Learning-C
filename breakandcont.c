#include <stdio.h>
int main()
{
    int n, sum;
    for (int i=0; i<10; i++)
    {
        printf("Enter a number: \n");
        scanf("%d", &n);
        if(n<0)
        {
            continue;
        }
        sum+=n;
    }
    printf("Sum = %d", sum);
    return 0;
}