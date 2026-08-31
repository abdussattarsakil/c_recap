#include <stdio.h>
int main()
{
    char sign;
    int n;
    scanf("%c %d", &sign, &n);
    // printf("%c\n%d", sign, n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        for(int j=1;j<=a;j++){
            printf("%c",sign);
        }
        printf("\n");
    }
    
    return 0;
}