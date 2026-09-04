#include <stdio.h>
int main()
{
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   long long int ab = a;
   long long int cd = c;
   if (a == c && b == d)
   {
      printf("NO");
      return 0;
   }
   if (b == d)
   {
      if (a > c)
      {
         printf("YES");
      }
      if (a < c)
      {
         printf("NO");
      }
      return 0;
   }
   if (a > c && b > d)
   {
      printf("YES");
      return 0;
   }
   if (a < c && b < d)
   {
      printf("NO");
      return 0;
   }
   for (int i = 1; i < b; i++)
   {
      ab *= a;
      printf("%d\n",ab);
   }
   for (int i = 1; i < d; i++)
   {
      cd *= c;
   }
   if (ab > cd)
   {
      printf("YES");
   }
   else
   {
      printf("NO");
   }
   printf("%lld\n%lld",ab,cd);
   return 0;
}
