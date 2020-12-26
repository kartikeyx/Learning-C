//A program to show how to use copy and concatenation function of string
#include <stdio.h>
#include <string.h>
int main()
{
    char word[50];
    char str1[10] = "Hello ";
    char str2[10] = "World";
    printf("Enter a word to copy in the place of world: ");
    fgets(word, sizeof(word), stdin);
    strcpy(str2, word); //It will copy the entered word in the place of str2
    strcat(str1, str2); //strcat is used to join to strings
    puts(str1);
    return 0;
}