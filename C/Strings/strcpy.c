#include<stdio.h>
main()
{
    char str1[10],str2[10];
    int i;
    printf("Enter String 1:");
    gets(str1);
    printf("Enter String 2:");
    gets(str2);

    i=strcpy(str1,str2);
    printf("\n%s",str1);
}
