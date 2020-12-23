#include <stdio.h>
int main()
{
    int gn, en;
    printf("Enter a number to guess for the other person: \n ");
    scanf("%d", &gn);
    printf("Enter the number you think the other person entered: \n");
    
    while(1)
    {   scanf("%d", &en);
        if(gn>en)
        {
            printf("Enter a larger number \n");
        }
        else if(gn<en)
        {
            printf("Enter a smaller number \n");
        }
        else
        {
            printf("Congratulations");
            break;
        }
        
    }
    return 0;
}