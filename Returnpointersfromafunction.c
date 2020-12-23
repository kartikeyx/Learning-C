//Return pointers from a function
#include <stdio.h>
int *addten(int *data)
{
    for(int i=0; i<5; i++)
    {
        *(data+i) = *(data+i) + 10;
    }
    return 0;
}
int main()
{
    int result;
    int data[5];
    for (int i=0; i<5; i++)
    {
        printf("Enter a number to store it in an array: \n");
        scanf("%d", &data[i]);
    }
    result = addten(data);
    
}