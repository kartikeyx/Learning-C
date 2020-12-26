//A program to show how to use compare function of string.
#include <stdio.h>
#include <string.h>
/*void compare(char str1, char str2)
{
    int result = strcmp(str1, str2);
    return result;
}*/
int main()
{
    char str1[50], str2[50]; int result;

    printf("Enter a word: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter another word to compare: ");
    fgets(str2, sizeof(str2), stdin);
    result = strcmp(str1, str2);
    
    //result = compare(str1, str2);

    if(result == 0)
    printf ("Both strings are equal");

    else
    printf("Entered strings are not equal");
    return 0;
}