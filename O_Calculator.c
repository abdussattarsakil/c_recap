#include <stdio.h>
#include <string.h>
int main()
{
    char input[100000];
    scanf("%s", &input);
    // printf("%s", input);
    // printf("%c\n", input[0]);
    int length = strlen(input);
    // printf("%d",length);
    int s;
    for (int i = 0; i < length; i++)
    {
        if (input[i] == '+')
        {
            s = i;
            break;
        }
    }

    printf("%d s\n", s);
    int a = 0;
    for (int i = 0; i < s; i++)
    {
        a *= 10;
        a += input[i] - '0';
    }
    int b = 0;
    for (int i = s + 1; i < length; i++)
    {
        b = b * 10 + (input[i] - '0');
        printf("%d b\n", b);
    }
    printf("%d a", a);

    return 0;
}