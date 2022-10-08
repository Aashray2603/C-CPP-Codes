#include<stdio.h>
int expo(int,int);
 main()
 {
     int a,b,res;
     printf("Enter Value of a,b:");
     scanf("%d,%d",&a,&b);
     res=expo(a,b);
     printf("Value of %d^%d=%d",a,b,res);
 }

int expo(x,y)
{
    int z;
    if(y==0)
        return 1;
    else
        z=x*expo(x,y-1);
        return z;
}
