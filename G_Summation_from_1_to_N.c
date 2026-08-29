// #include <stdio.h>
// int main()
// {
//     long long int n;
//     scanf("%lld", &n);
//     long long int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum =sum+i;
//     }
//     printf("%lld",sum);
//     return 0;
// }

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = n * (n + 1) / 2;

    printf("%lld", sum);

    return 0;
}