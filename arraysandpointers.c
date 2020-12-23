//To print the addresses of array elements
#include <stdio.h>
int main()
{
    int x[3];
    for(int i=0; i<3; i++)
    {
        printf("&x[%d] = %p \n", i, &x[i]);
    }
    printf("Address of array x: %p", x);
    return 0;
}