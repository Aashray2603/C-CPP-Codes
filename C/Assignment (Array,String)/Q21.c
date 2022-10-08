#include<stdio.h>
int length();
main()
{
    int m;
    m=length();
    printf("length is %d",m);
}

int length()
{
    char str[25];
    int i,count=0;
    printf("string:");
    gets(str);
    for (i=0;str[i]!='\0';i++)
       count++;
    return count;
}
