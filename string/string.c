// #include<stdio.h>
// int main()
// {
//    char n[5];//koto size er input
//    scanf("%s",n);
//    printf("%s",n);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//    char str1[20] = "Bangladesh";                    // অটোমেটিক '\0' যুক্ত
//    char str2[20] = {'D', 'h', 'a', 'k', 'a', '\0'}; // ম্যানুয়ালি '\0' যুক্ত

//    printf("str1: %s\n", str1); //Bangladesh
//    printf("str2: %s\n", str2);//Dhaka

//    return 0;
// }

// space soho string print
//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//     char str[20];
//     gets(str);
//     printf("%s",str);
//     return 0;
// }//gets() function-টা C11 standard থেকে remove করা হয়েছে, কারণ এটা unsafe। Buffer overflow হতে পারে।

#include <stdio.h>
#include <string.h> // fgets ব্যাবহার করতে হলেও এই হেডার ফাইলটি ইনক্লুড করতে হয়।
int main()
{
   char a[100];
   fgets(a, 20, stdin);
   // fgets এর মধ্যে শুরুতে স্ট্রিং এর নাম বলে দিতে হয়, তারপর কত সাইজ ইনপুট নিব সেটার সাইজ দিতে হয় নাল সহ, তারপর stdin এই কিওয়ার্ডটি দিতে হয়।
   printf("%s",a);
   return 0;
}