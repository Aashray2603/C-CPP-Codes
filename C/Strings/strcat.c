#include<stdio.h>
main()
{
    char str1[25],str2[25];
    int i;
    printf("Enter String 1:");
    gets(str1);
    printf("Enter String 2:");
    gets(str2);

    i=strcat(str1,str2);
    printf("\n%s",str1);
}
