#include<stdio.h>
#define P printf
#define S scanf
main()
{
    int x,a,b,c;
    P("enter x:");
    S("%d",&x);
    P("enter a:");
    S("%d",&a);
    x+=a;
    P("x=%d",x);
    P("\nenter b:");
    S("%d",&b);
    x*=b;
    P("x=%d",x);
    P("\nenter c:");
    S("%d",&c);
    x%=c;
    P("x=%d",x);

}










