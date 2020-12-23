//A program to swap three numbers in cyclic order
#include <stdio.h>
int swap(int *a, int *b, int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}
int main()
{
    int m=1,n=2,o=3;
    swap(&m, &n, &o);
    printf("Values after swapping: \n");
    printf("First = %d \nSecond = %d \nThird = %d", m,n,o);
    return 0;
    
}