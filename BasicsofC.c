#include <stdio.h>
int main() 
{ int id; float num1; double num2;
   printf("Enter an integer: ");
   scanf("%d", &id);
   printf("Enter a number: ");
   scanf("%f", &num1);
   printf("Enter another number: ");
   scanf("%lf", &num2);
   printf("id = %d \n", id);
   printf("num1 = %f \n", num1);
   printf("num2 = %lf", num2);
return 0;

   
}
