#include <stdio.h>
int main() 
{
  int i, result;
  for (i = 1; i < 10; ++i)
  {
    printf("%d \n", i);
  }
  double no;
  printf("Enter a number: ");
  scanf("%lf", &no);
  while (no >= 0.0)
  {
    printf("The entered no. is %.2lf \n", no);
    printf("Enter a number: ");
    scanf("%lf", &no);
  }
  
  return 0;
}