#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);

   for(i=1;i<=n;i++){
    // printf("%d\n",i);
    if(i%2==0){
        printf("%d - even number\n",i);
    }
    else{
        printf("%d - odd number\n",i);
    }
   }
   return 0;  
}