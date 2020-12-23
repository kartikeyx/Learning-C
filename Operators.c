#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    // Assign the value of Number one into Number two
    x=y;
    printf("New number is %d \n", x);
    int n1, n2;
    printf("Enter more numbers so you can learn the application of arithmetic operators: \n");
    scanf("%d%d", &n1, &n2);
    int sum= n1+n2;
    int dif= n1-n2;
    int mul= n1*n2;
    double di= n1/n2;
    double rem= n1%n2;
    printf("Sum is %d \n", sum);
    printf("Difference = %d \n", dif);
    printf("Multiplication = %d \n", mul);
    printf("Divisible = %lf \n", di);
    printf("Reminder = %lf \n", rem);
    n1+=n2;
    printf("New n1 = %d \n", n1);
    n1=45;
    printf("Now n1 is %d \n", n1);
    n1-=n2;
    printf("New difference = %d", n1);
    return 0;
    
}