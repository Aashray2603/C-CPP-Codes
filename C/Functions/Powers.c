int expo(int,int);
#include<stdio.h>
main()
{
    int a,b,res;
    printf("Enter valued of a,b:");
    scanf("%d,%d,%d",&a,&b);
    res=expo(a,b);
    printf("%d^%d is %d",a,b,res);
}

int expo(int x,int y)
{
    int i,z=1;
   for (i=1;i<=y;i++)
   {
       z=z*x;
   }
    return z;
}



