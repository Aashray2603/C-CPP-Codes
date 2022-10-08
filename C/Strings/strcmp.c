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
    else
        printf("Strings are different");
}

/* The function strcmp shows aap and AAP as 2 different strings.
Incase this issue is to be avoided i.e. case sensitiveness is not to     be checked, use strcmpi. Also if i>0, string 1 is greater and if i<0, string 2 is greater. */
