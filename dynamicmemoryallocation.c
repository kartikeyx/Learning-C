//Program to calculte the sum of n numbers entered by the user 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter of number of elements: \n");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // ptr = (int*) calloc(n, sizeof(int)); If you want to use calloc
    if(ptr == NULL)
    {
        printf("MEMORY NOT ALLOCATED");
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter a number: \n");
        scanf("%d", ptr+i);
        sum+= *(ptr+i);
    }
    printf("Sum = %d", sum);
    //Deallocate memory
    free(ptr);
    return 0;
}
/* A program to show how to use realloc. realloc is used when the dyanamic memory allocation is insufficient or 
more than required.
int main()
{
    int *ptr, i , n1, n2;
    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\n",ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%u\n", ptr + i);
  
    free(ptr);

    return 0;
}*/