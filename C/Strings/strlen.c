#include<stdio.h>
main()
{
    char str[10];
    int i;
    printf("Enter String:");
    gets(str);

    i=strlen(str);
    printf("\nLenght of string is %d",i);
}
