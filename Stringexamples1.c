//A program to show how to find string length without using string function.
#include <stdio.h>
int main()
{
    char str[] = "Hello world";
    int count = 0;
    while(str[count] != '\0');
    {
        ++count;
    }
    printf("LENGTH = %d", count);
    return 0;
}