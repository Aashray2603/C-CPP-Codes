#include<stdio.h>
int concate();
main()
{
    char m;
    m=concate();
}

int concate()
{
    char str1[25],str2[25];
    int i,l1=0,j;
    printf("Enter string 1:");
    gets(str1);
    printf("Enter string 2:");
    gets(str2);


    for (i=0;str1[i]!='\0';i++)
       l1++;
    for (j=0;str2[j]!='\0';i++,j++)
        str1[i] = str2[j];

     str1[i] = '\0';

       printf("%s",str1);
}
