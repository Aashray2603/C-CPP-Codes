int sum(int,int);
#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter valued of a,b:");
    scanf("%d,%d",&a,&b);
    c=sum(a,b);
    printf("Sum is %d",c);
}
 int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
