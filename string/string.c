// #include<stdio.h>
// int main()
// {
//    char n[5];//koto size er input
//    scanf("%s",n);
//    printf("%s",n);
//    return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
   char str1[20] = "Bangladesh";                    // অটোমেটিক '\0' যুক্ত
   char str2[20] = {'D', 'h', 'a', 'k', 'a', '\0'}; // ম্যানুয়ালি '\0' যুক্ত

   printf("str1: %s\n", str1); //Bangladesh
   printf("str2: %s\n", str2);//Dhaka

   return 0;
}