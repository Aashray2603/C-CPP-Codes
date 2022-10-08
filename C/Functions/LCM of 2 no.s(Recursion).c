#include<stdio.h>
int LCM(int,int);
 main()
 {
     int a,b,res;
     printf("Enter Value of a,b:");
     scanf("%d,%d",&a,&b);
     res=LCM(a,b);
     printf("LCM of %d & %d is %d",a,b,res);
 }

int LCM(x,y)
{
    static int z=1;

    if (z%x==0 && z%y==0)
    {
        return z;
    }
    z++;
    LCM(x,y);
}
