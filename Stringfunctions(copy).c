//A program to show how to use copy function of string
#include <stdio.h>
#include <string.h>
int main()
{
    char word[50];
    char str1[10] = "Hello";
    char str2[10] = "World";
    printf("Enter a word to copy in the place of world: ");
    fgets(word, sizeof(word), stdin);
    strcpy(str2, word);
    puts(str1);
    puts(str2);
    return 0;
}