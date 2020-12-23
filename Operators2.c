#include <stdio.h>
int main()
{   
    int a = 99, b= 2, x,y,swap;
    double result;
    ++a;
    ++a;
    --a;
    result = (double) a/b;
    printf("Result = %.2lf \n", result);
    printf("RESULT = %lf \n", result);
    int in; long int lin; double dou; float fl; char ch;
    printf("Int: %zu \n", sizeof(in));
    printf("Long Int: %zu \n", sizeof(lin));
    printf("Double: %zu \n", sizeof(dou));
    printf("Float: %zu \n", sizeof(fl));
    printf("Character: %zu \n", sizeof(ch));
    printf("Enter two numbers to swap: ");
    scanf("%d%d", &x,&y);
    swap=x;
    x=y;
    y=swap;
    printf("x=%d, y=%d", x,y);
    return 0;
}