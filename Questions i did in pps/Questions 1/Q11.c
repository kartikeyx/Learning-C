#include <stdio.h>
int main()
{
    char ch; int n1,n2;
    printf("Enter the operand you want to use: ");
    scanf("%c", &ch);
    printf("Enter two numbers to %c:", ch);
    scanf("%d%d", &n1, &n2);

    switch(ch)
    {
        case '+':
        printf("Sum = %d", n1+n2);
        break;
        case '-':
        printf("Difference = %d", n1-n2);
        break;
        case '*':
        printf("Product = %d", n1*n2);
        break;
        case '/':
        printf("Dividend = %d", n1/n2);
        break;
        case '%':
        printf("Remainder = %d", n1%n2);
        break;
        default:
        printf("ENTER A VALID OPERAND");
    }
    return 0;
}