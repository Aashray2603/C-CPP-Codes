#include<stdio.h>
#define P printf
#define S scanf
void area(int);
main()
{
 int x,y;
 P("enter x:");
 S("%d",&x);
 y=area(x);
}
void area(int a)
{
    int r=a*a;
    P("area of square=%d",r);
}











