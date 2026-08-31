#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    long long int mul=a*b*c*d;
    printf("%d",mul%100);
    return 0;
}