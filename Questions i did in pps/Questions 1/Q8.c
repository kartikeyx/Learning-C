//A program to check whether the number entered is even or odd.
#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter a number to check: ");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("Entered number %d is even.", a);
    }
    else
    printf("Entered number %d is odd.", a);

    return 0;
}