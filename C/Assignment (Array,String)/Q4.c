#include<stdio.h>
main()
{
    char str1[10],str2[10];
    int i;
    printf("Enter String 1:");
    gets(str1);
    printf("Enter String 2:");
    gets(str2);

    i=strcmp(str1,str2);
    if(i==0)
        printf("Strings are same");
    else if(i>0)
        printf("String 1 is greater");
    else
        printf("String 2 is greater");
}

