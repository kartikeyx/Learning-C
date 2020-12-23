//A program to find standard deviation
#include <math.h>
#include <stdio.h>
double sd(double data[], int length)
{
    double mean, result, sum =0.0; result=0.0;
    for (int i=0; i<length; i++)
    {
        sum+=data[i];
    }
    mean = sum / length;
    for(int i=0; i<length; i++)
    {
        result+= (data[i]-mean)*(data[i]-mean);
    }
    result = sqrt(result / length);
    return result;
}
int main()
{
    double result; int si; 
    printf("Enter the size of array: ");
    scanf("%d", &si);
    double ar[si];
    for (int i=0; i<si; i++)
    {
        printf("\nEnter a number to store at %d position in array: ", i+1);
        scanf("%lf", &ar[i]);
    }
    int length = sizeof(ar)/ sizeof(ar[0]);
    result = sd(ar, length);
    printf("\nStandard deviation = %.2lf", result);
    return 0;

}