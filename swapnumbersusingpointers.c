//Swap two numbers using pointers
#include <stdio.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int m,n;
    printf("Enter two numbers top swap: \n");
    scanf("%d%d", &m,&n);
    swap(&m, &n);
    printf("Now first number is %d and Second number is %d", m,n);
    return 0;
}