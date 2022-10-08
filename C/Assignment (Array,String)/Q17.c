#include<stdio.h>
main()
{
    char str[25];
    int i;
    printf("Enter String:");
    gets(str);
    for (i=0;i<=strlen(str)-1;i++)
    {
        if ((i+1)%3==0)
        {
            if(str[i]>=97 && str[i]<=122)
                printf("%c\t",str[i]);
        }
    }
}
