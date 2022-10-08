int sum(int);
#include<stdio.h>
main()
{
    int a,b;
    printf("Enter valued of a:");
    scanf("%d",&a);
    b=factorial(a);
    printf("Factorial is %d",b);
}
 int factorial(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
