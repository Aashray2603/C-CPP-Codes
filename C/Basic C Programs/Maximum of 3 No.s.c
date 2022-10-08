/* print max value out of x,y,z */
#include<stdio.h>
#define P printf
#define S scanf
main()
{
    int x,y,z,max;
    P("enter x:");
    S("%d",&x);
    P("enter y:");
    S("%d",&y);
    P("enter z:");
    S("%d",&z);
    max=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("Max value is %d",max);

}



