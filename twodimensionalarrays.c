//A program to fill and print  a two dimensional array using loops
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns you want in an array: \n");
    scanf("%d%d", &r, &c);
    int ar[r][c];
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("Enter a number to fill the array at %d row and %d column: \n", i+1, j+1);
            scanf("%d", &ar[i][j]);
        }
    }
    
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("The number at %d row and %d column is %d \n", i+1, j+1, ar[i][j]);
        }
    }
    return 0;
}
