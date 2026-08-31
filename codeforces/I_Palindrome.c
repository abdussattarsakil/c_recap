#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int input=n;
    int reverse = 0;
    while (n > 0)
    {
        int r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    printf("%d\n",reverse);
    if(input==reverse){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
