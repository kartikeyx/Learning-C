//Since string is an array of characters we can use pointers to manipulate it.
#include <stdio.h>
int main(void)
{
    char name[60];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("%c", *name);
    printf("%c", *(name+2));
    printf("%c", *(name+6));
    
    char *nameptr= name;
   // *nameptr ;
    
    printf("%c", *nameptr);
    printf("%c", *(nameptr+2));
    printf("%c", *(nameptr+6));

    return 0;
}