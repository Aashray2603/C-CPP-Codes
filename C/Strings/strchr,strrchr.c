#include<stdio.h>
main()
{
    char s[10]="Aashray",ch,ch_,*p,*q;
    ch='A';
    ch_='a';
    p=strchr(s,ch);
    printf("First appearance of %c in string '%s' is %s\n",ch,s,p);
    q=strrchr(s,ch_);
    printf("Last appearance of %c in string '%s' is %s",ch_,s,q);
}
