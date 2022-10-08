#include<stdio.h>
int HCF(int,int);
 main()
 {
     int a,b,res;
     printf("Enter Value of a,b:");
     scanf("%d,%d",&a,&b);
     res=HCF(a,b);
     printf("HCF of %d & %d is %d",a,b,res);
 }

int HCF(x,y)
{
    while (x!=y)
    {
        if(x>y)
        {
            return HCF(x-y,y);
        }
        else
        {
            return HCF(x,y-x);
        }
    }
    return x;
}
