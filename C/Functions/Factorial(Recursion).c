#include<stdio.h>
int factorial(int);
 main()
 {
     int a,b;
     printf("Enter Value of a:");
     scanf("%d",&a);
     b=factorial(a);
     printf("Value of %d!=%d",a,b);
 }

int factorial(int x)
{
    int y;
    if(x==1 || x==0)
        return 1;
    else
        y=x*factorial(x-1);
        return y;
}
