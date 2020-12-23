//To find average of the elements of an array
#include <stdio.h>
double main()
{
    int s; double sum= 0;
    printf("Enter the size of an array: ");
    scanf("%d", &s);
    double ar[s];
    for (int i=0; i<s; i++)
    {
        printf("Enter a number to store at %d postion in array: ", i+1);
        scanf("%lf", &ar[i]);
        sum += ar[i];
    }
    double av = sum/5;
    printf("Sum = %.2lf \nAverage = %.2lf", sum, av);
}
