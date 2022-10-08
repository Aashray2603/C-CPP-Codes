#include<stdio.h>
#define P printf
#define S scanf
main()
{
    int x,y;
    float p,q,ans;
    P("x=");
    S("%d",&x);
    P("y=");
    S("%d",&y);
    P("p=");
    S("%f",&p);
    P("q=");
    S("%f",&q);

    ans=(x+p)+(y+q);
    P("ans=%f",ans);

}
