//A program to find frequency of a character in a string.
#include <stdio.h>
int main()
{
    char str[] = "Hello world. My name is Kartikey.";
    char ch = 'e';
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