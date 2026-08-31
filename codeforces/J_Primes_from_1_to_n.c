#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int r = 2; r < i; r++)
        {
            if (i % r == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}