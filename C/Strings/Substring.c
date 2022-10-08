#include<stdio.h>
main()
{
   char s1[100],s2[100];
   int i,j;

   printf("Enter string:");
   gets(s1);

   for(i=0,j=0;s1[i]!='\0';i++)
   {
     if((s1[i]>='A' && s1[i]<='Z')||(s1[i]>='a' && s1[i]<='z'))
     {
        s2[j]=s1[i];
        j++;
     }
   }
   s2[j]='\0';

   printf("Substring:%s",s2);
}
