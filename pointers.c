//A program to assign the address of a variable to a pointer
#include <stdio.h>
int main()
{
    int *pc, c=22;
    printf("Address of c: %p \n", &c);
    printf("Value of c: %d \n\n", c);
    
    pc = &c;
    printf("Address of pc: %p \n", pc);
    printf("Content in pc: %d \n\n", *pc);

    c=11;
    printf("Content in pc: %d \n", *pc);
    *pc=2;
    printf("Value of c: %d", c);

    return 0;
}