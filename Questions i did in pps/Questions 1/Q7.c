//A program to check the greatest of three numbers.
#include <stdio.h>
int main()
{
   int ar[3];
    for (int j=0; j<3; j++)
    {
        printf("Enter a number to store at %d position in array: \n", j+1);
        scanf("%d", &ar[j]);
    }
    for (int i=0; i<3; i++)
    {
        if(ar[0]<ar[i])
        {
            ar[0]=ar[i];
        }
    }
    printf("\nGreatest element in the array is %d", ar[0]);
    return 0;
} 