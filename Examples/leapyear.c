//A program to find if the entered year is a lep year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year to check if its a leap year or not: ");
    scanf("%d", &year);
/*    if(year % 4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                printf("Entered year %d is a leap year.", year);
            }
            else
            {
                printf("Entered year %d is not a leap year.", year);
            }
            
        }
        else
        {
            printf("Entered year %d is a leap year.", year);
        }
        
    }
    else
    {
        printf("Entered year %d is not a leap year.", year);
    }
}
*/
if(year % 400 == 0)
{
    printf("Entered year is a leap year");
}
else if(year % 100 == 0)
{
    printf("Entered year is not a leap year");
}
else if (year % 4 == 0)
{
    printf("Entered year is a leap year");
}
return 0;
}