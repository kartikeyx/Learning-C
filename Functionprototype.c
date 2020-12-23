#include <stdio.h>
/*By using function prototype we can define the function
 after we call it like here we call the function in main but define it after calling it*/
int addnumbers(int, int);
int main()
{   
    int a,b, result;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a, &b);
    result = addnumbers(a, b);
    printf("Sum = %d", result);
    return 0;
}
//Defining the function after function call
int addnumbers(int n1, int n2)
{
    int sum= n1+n2;
    return sum;
}