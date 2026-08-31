#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 1999)
        {
            printf("Correct");
            return 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}