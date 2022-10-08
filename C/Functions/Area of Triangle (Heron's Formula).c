#include<stdio.h>
#include<math.h>
float area(float,float,float);

main()
{
    float a,b,c,ar;
    printf("Enter values of a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
    ar=area(a,b,c);
    printf("Area is %f",ar);
    }
    else
    printf("Not a Triangle");
}

float area(float x,float y,float z)

{
    float s,w;
    s=(x+y+z)/2;
    w=sqrt(s*(s-x)*(s-y)*(s-z));
    return w;
}

