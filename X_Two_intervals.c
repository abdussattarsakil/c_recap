#include <stdio.h>
int main()
{
   int a, b, c, d;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   int left = a > c ? a : c;
   // printf("%d\n",left);
   int right = b < d ? b : d;
   // printf("%d\n",right);
   left > right ? printf("-1") : printf("%d %d", left, right);
   return 0;
}