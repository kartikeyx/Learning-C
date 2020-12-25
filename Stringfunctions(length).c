#include <stdio.h>
#include <string.h>
int main()
{
    char name[60];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("The length of entered string is: %zu \n", strlen(name));
    return 0;
}