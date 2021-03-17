//Write a program that accepts marks of 5 subjects and find the sum and percentage of marks obtained.
#include <stdio.h>
double main()
{
    double s=0, sum=0.0, p;    
    char ar[100];
    printf("Enter name of the student: ");
    fgets(ar, sizeof(ar), stdin);
    for(int i=1; i<6; i++)
    {
        printf("\nEnter marks obtained in %d subject: ", i);
        scanf("%lf", &s);
        sum+=s;
        s=0;
    }
    p = sum/5.0;
    printf("\nName of the student: ");
    puts(ar);
    printf("\nTotal sum of marks obtained: %lf", sum);
    printf("\nPercenage obtained = %.2lf", p);
    return 0;
}