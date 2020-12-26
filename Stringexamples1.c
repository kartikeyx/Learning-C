//A program to show how to find string length without using string function.
#include <stdio.h>
int main()
{
    int count = 0;
    char str[] = "Hello world.";
    
    while(str[count] != '\0');
    {
        ++count;
    }
    printf("LENGTH = %d", count);
    return 0;
}