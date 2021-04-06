#include <stdio.h>
int main()
{
    int i, a[10], b[10], s[10];
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter 10 numbers to store in first array: ");
        scanf("%d", &a[i]);
    }
    printf("First Array: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter 10 numbers to store in second array: ");
        scanf("%d", &b[i]);
    }
    printf("Second Array: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    for (i = 0; i < 10; i++)
    {
        s[i] = a[i] + b[i];
    }
    printf("\nSum of Arrays:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", s[i]);
    }
    return 0;
}