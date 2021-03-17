//A program same as  First question but you have to print grades according to the percent secured.
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
    p = sum/5;
 
    printf("\nTotal sum of marks obtained: %lf", sum);
    printf("\nPercenage obtained = %.2lf", p);
    printf("\nName of the student: ");
    puts(ar);
    if(p>90)
    printf("Grade : A");
    else if(p>80)
    printf("Grade : B");
    else if(p>70)
    printf("Grade : C");
    else
    printf("Grade : D");

    printf("\nTotal sum of marks obtained: %lf", sum);
    printf("\nPercenage obtained = %.2lf", p);
    return 0;
}