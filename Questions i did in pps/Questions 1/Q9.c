//A program to check if the y entered is a leap y o not.
#include <stdio.h>
int main()
{
    int y;
    printf("Enter a y to check if its a leap y or not: ");
    scanf("%d", &y);

    /*if(y%400==0)
    {
        printf("Entered y is a leap y");
    }
    else if(y%100==0)
    {
        printf("Entered y is not a leap y.");
    }
    else if(y%4==0)
    {
        printf("Entered y is a leap y.");
    }
    return 0;*/
    if(y % 4 == 0)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
            {
                printf("Entered year %d is a leap y.", y);
            }
            else
            {
                printf("Entered y %d is not a leap y.", y);
            }
            
        }
        else
        {
            printf("Entered y %d is a leap y.", y);
        }
        
    }
    else
    {
        printf("Entered y %d is not a leap y.", y);
    }
}