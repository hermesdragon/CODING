#include <stdio.h>

int check_anagram(char [], char []);

void main()
{
   char a[500], b[500];
   int flag,t;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%s",a);
       scanf("%s",b);
       flag = check_anagram(a, b);
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");

   }




}

int check_anagram(char a[], char b[])
{
   int first[26] = {0}, second[26] = {0}, c = 0;

   while (a[c] != '\0')
   {
      first[a[c]-'a']++;
      c++;
   }

   c = 0;

   while (b[c] != '\0')
   {
      second[b[c]-'a']++;
      c++;
   }

   for (c = 0; c < 26; c++)
   {
      if (first[c] != second[c])
         return 0;
   }

   return 1;
}
