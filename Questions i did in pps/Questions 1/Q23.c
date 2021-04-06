#include <stdio.h>
int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter 10 elements to find minimum and maximum no. in the array: ");
        scanf("%d", &a[i]);
    }
    for (int step = 0; step < 10 - 1; ++step)
    {
        for (i = 0; i < 10 - step - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {

                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("\nMinimum number in array = %d", a[0]);
    printf("\nMaximum number in array = %d", a[9]);
    return 0;
}