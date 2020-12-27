//A program to show how to use ternary operator.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check if its odd or even: ");
    scanf("%d", &num);

    (num % 2==0) ? printf("%d is even", num): printf("%d is odd", num);
    return 0; 
}