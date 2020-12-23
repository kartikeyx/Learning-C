//A program to find greatest number in an array
#include <stdio.h>
int main()
{
    int size;
    printf("Enter total number of elements you want to store in an array: ");
    scanf("%d", &size);
    int ar[size];
    for (int j=0; j<size; j++)
    {
        printf("Enter a number to store at %d position in array: \n", j+1);
        scanf("%d", &ar[j]);
    }
    for (int i=0; i<size; i++)
    {
        if(ar[0]<ar[i])
        {
            ar[0]=ar[i];
        }
    }
    printf("\nGreatest element in the array is %d", ar[0]);
}