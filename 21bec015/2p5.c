#include <stdio.h>
int factorial(int);
int main()
{
   int num, fact;
   printf("Enter any integer number:\n");
   scanf("%d", &num);

   fact = factorial(num);

   printf("factorial of %d is: %d\n", num, fact);
   return 0;
}
int factorial(int n)
{
   if (n == 0)
      return (1);
   else
      return (n * factorial(n - 1));
}