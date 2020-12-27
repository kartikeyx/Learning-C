//A program to find out the roots of a quadratic equation.
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, disc, root1, root2, realp, imgp;
    printf("Enter cofficients a, b, and c: ", &a, &b, &c);
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = b*b - 4*a*c;

    if(disc>0)
    {
        root1 = (-b+sqrt(b*b -4*a*c))/2*a;
        root2 = (-b+sqrt(b*b +4*a*c))/2*a;
        printf("Roots are real and different. \nFirst root = %lf \nSecond root = %lf", root1, root2);
    }
    else if(disc==0)
    {
        root1 = -b/2*a;
        printf("Roots are real and equal. \nFirst root = %lf \nSecond root = %lf", root1, root1);
    }
    else
    {
        realp = -b/2*a;
        imgp = sqrt(-(b*b - 4*a*c))/2*a;
        printf("Roots are complex and different. \nFirst root = %lf+%lfi \nSecond root = %lf-%lfi", realp, imgp, realp, imgp); 
    }
    return 0;
}