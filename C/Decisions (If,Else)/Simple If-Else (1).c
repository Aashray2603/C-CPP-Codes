#include<stdio.h>
#define P printf
#define S scanf
main()
{
    int x,y;
    P("enter x:");
    S("%d",&x);
    P("enter y:");
    S("%d",&y);

    if (x==y)
    {
        printf("x and y are same");
    }

    else
    {
        printf("x and y are not same");
    }
}











