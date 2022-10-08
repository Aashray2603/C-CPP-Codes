#include<stdio.h>
main()
{
    char s1[20],s2[20],*p;
    printf("String 1:");
    gets(s1);
    printf("String 2:");
    gets(s2);

    p=strstr(s1,s2);

    if(p!=NULL)
        printf("S2 is substring of s1");
    else
        printf("Not a substring");
}
