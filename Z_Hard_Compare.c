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