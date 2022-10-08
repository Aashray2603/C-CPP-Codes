#include<stdio.h>
main()
{
    char str[25],i;
    printf("Enter String:");
    gets(str);
    printf("Reverse is:");
    for (i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
}
