#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s", str1, str2);
    // printf("%s %s", str1, str2);
    int j=strlen(str1);
    for (int i = 0; i <= strlen(str2); i++)
    {
      str1[j]=str2[i];
      j++;
    }
    printf("%s",str1);
    return 0;
}