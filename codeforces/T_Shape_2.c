#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 1;
    int s = n;
    for (int i = 1; i <= n; i++)
    {

        for (int k = s; k > 1; k--)
        {
            printf(" ");
        }

        s -= 1;

        for (int j = 1; j <= t; j++)
        {
            printf("*");
        }
        t += 2;
        printf("\n");
    }
    return 0;
}