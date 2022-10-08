#include<stdio.h>
main()
{
int x,*p,**q,***r;
x=5;
p=&x,q=&p,r=&q;
printf("\n%d \n%d \n%d \n%d",*r,q,&p,x);
printf("\n%d \n%d \n%d \n%d",**q,&r,&x,p);
printf("\n%d \n%d \n%d \n%d",**r,*p,*&q,&q);
}
