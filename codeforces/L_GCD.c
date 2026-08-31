#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // printf("%d %d",a,b);
    int GCD = 1;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            GCD = i;
        }
    }
    printf("%d", GCD);
    return 0;
}