//A basic program to get and print a name.
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name: ");
    puts(name);

    return 0;
}
/* A program to get and print a string using recurssion.
void printstring(char name[])
{
    printf("String output: ");
    puts(name);
}
int main()
{
    char name[60];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printstring(name);
    return 0;
}
*/