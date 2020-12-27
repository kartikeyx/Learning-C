//A program to show the ASCII code of entered character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character to find its ASCII code: ");
    scanf("%c", &ch);
    printf("The ASCII code of %c is %d", ch, ch);
    return 0;

}