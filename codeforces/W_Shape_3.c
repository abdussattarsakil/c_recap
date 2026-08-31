#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < space; k++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }
    // reverse
    int starR = (n * 2) - 1;
    int spaceR = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < spaceR; k++)
        {
            printf(" ");
        }
        spaceR++;

        for (int j = 1; j <= starR; j++)
        {
            printf("*");
        }
        starR -= 2;
        printf("\n");
    }
    return 0;
}