#include <stdio.h>
int main()
{
    int n , se=0, so=0;
    printf("Enter a number to find the sum: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            se+=i;
        }
        else
        {
            so+=i;
        }
    }
    printf("Sum of EVEN numbers upto %d is %d", n, se);
    printf("\nSum of ODD numbers upto %d is %d", n, so);
    return 0;
}