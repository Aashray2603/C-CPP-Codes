#include<stdio.h>
main()
{
    int a,b,c;
    printf("a, b, c are");
    scanf("%d %d %d",&a,&b,&c);
    if ((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
    {
        printf("it is a right angled triangle");
    }
    else
    {
        printf("not a right angled triangle");
    }
}
