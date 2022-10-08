
#include<stdio.h>
#define P printf
#define S scanf
main()
{
    int D,M,Y;
    P("Enter any day:");
    S("%d",&D);
    Y=D/365;
    M=D/30;
    D=D%30;
    P("Total years=%d",Y);
    P("\nTotal months=%d",M);
    P("\nTotal days=%d",D);

}
