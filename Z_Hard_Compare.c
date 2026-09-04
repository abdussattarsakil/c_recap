#include <stdio.h>
int main()
{
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   long long int ab = a;
   long long int cd = c;
   for (int i = 1; i < b; i++)
   {
      ab *= a;
      printf("%lld\n", ab);
      //problem long long int 9.22*10^18 er simar bahire chole jay
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
   return 0;
}
