#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int is_prime=1;
    if (n < 2)
    {
        printf("%d - not a prime number", n);
        return 0;
    }
    else            
    {
        for (int i = 2; i < n; i++)
        {
            if(n%i==0){
                is_prime=0;
                break;
            }
        }
    }
    if(!is_prime){
        printf("%d - not a prime number",n);
    }
    else{
        printf("%d - prime number",n);
    }
    return 0;
}