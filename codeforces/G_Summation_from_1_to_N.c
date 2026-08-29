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

//if user input n=641......  ->মানে i = 0 থেকে 641009859 পর্যন্ত মোট প্রায় 641 million iterations। 250 ms-এর মধ্যে এটা শেষ করা সম্ভব নয়।

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = n * (n + 1) / 2;

    printf("%lld", sum);

    return 0;
}