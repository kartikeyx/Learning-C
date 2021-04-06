#include <stdio.h>
int main()
{
    int sum = 0;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter 10 numbers to find there sum: ");
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of entered elements = %d", sum);
    return 0;
}