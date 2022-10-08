#include<stdio.h>
main()
{
    float a,b,c,D;
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
    printf("enter c:");
    scanf("%f",&c);
    D=(b*b)-(4*a*c);
    printf("Discriminant is %f",D);
}
