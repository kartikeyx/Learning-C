//Pass Address as Argument
#include <stdio.h>
void changeValue(int *n)
{
    *n = 100;
}
int main()
{
    int number = 5;
    printf("Before, number = %d\n", number);
    changeValue(&number);
    printf("After, number = %d \n", number);
    return 0;
}