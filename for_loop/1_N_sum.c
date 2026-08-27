#include <stdio.h>
int main()
{
   int n;
   // printf("Given n = ");
   scanf("%d", &n);
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
      printf("%d + %d = ", sum, i);
      sum += i;
      printf("%d\n",sum);
   }
   printf("Total sum = %d", sum);
   return 0;
}