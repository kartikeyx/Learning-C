#include <stdio.h>
int addnumbers(int n1, int n2)
{
    int sum = n1+n2;
    return sum; 
}
int main()
{
    int a, b, result;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);
    result = addnumbers(a,b);
    printf("Sum = %d", result);
    return 0;

}