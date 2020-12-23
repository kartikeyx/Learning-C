#include <stdio.h>
int main()
{
    char operator;
    int n1, n2;
    printf("Enter the operator you want to use: \n");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    switch(operator)
    {
        case '+':
        printf("Result = %d", n1+n2);
        break;
        case '-':
        printf("Result = %d", n1-n2);
        break;
        case '*':
        printf("Result = %d", n1*n2);
        break;
        case '/':
        printf("Result = %d", n1/n2);
        break;
        case '%':
        printf("Result = %d", n1%n2);
        break;
        default:
        printf("Enter a valid operator");
    }
    return 0;
}