#include<stdio.h>
#define P printf
#define S scanf
float area(float);
main()
{
    float x,r;
    P("enter r:");
    S("%f",&r);
    x=area(r);
    printf("Area of circle is %f",x);

}
   float area(float y)
   {
       float ar;
       ar=3.14*y*y;
       return ar;

   }





