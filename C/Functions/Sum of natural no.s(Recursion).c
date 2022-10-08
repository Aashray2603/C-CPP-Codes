#include<stdio.h>
int sum(int);
 main()
 {
     int a,b;
     printf("Enter Value of a:");
     scanf("%d",&a);
     b=sum(a);
     printf("Sum of first %d no.s=%d",a,b);
 }

int sum(int x)
{
    int y;
    if(x==1)
        return 1;
    else
        y=x+sum(x-1);
        return y;
}
