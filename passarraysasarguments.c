//Find the sum of array elements(Exmaple of pass array argument)
#include <stdio.h>
double calcsum(double age[])
{
    double sum = 0.0;
    for (int i=0; i<4; i++)
    {
        sum += age[i];
    }
    return sum;
}
int main()
{
    double result, age[4];
    for (int i=0; i<4; i++)
    {
        printf("Enter age of four persons to be filled in an array: ");
        scanf("%d", &age[i]);
    }
    result = calcsum(age);
    printf("Sum = %d", result);
    return 0;
}


