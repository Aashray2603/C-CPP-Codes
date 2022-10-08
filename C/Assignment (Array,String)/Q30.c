#include<stdio.h>
main()
{
    char str[10];
    int i;
    printf("Enter String:");
    gets(str);
   i=strcmp(str,strrev(str));
        if(i==0)
        printf("String is A Palindrome");
        else
        printf("String is Not A Palindrome");
}



