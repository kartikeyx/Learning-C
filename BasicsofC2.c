#include <stdio.h>
int main()
{
    int num1;
    double num2;
    printf("Enter two numbers: "); //take two numbers
    scanf("%d%lf", &num1, &num2); //store them in the variables
    printf("num1 = %d \n", num1); //print the first number entered
    printf("num2 = %lf", num2); // print the second number entered
    return 0;
}