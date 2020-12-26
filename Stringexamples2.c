//A program to find frequency of a character in a string.
#include <stdio.h>
int main()
{
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char ch;
    printf("\nEnter a character to find its frequency: ");
    scanf("%c", ch);
    int fre = 0;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            ++fre;
        }
    }
    printf("Frequency of %c = %d", ch, fre);
    return 0;
}