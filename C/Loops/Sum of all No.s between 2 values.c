#include<stdio.h>
main()
{
int x,y,i,sum=0;
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
 if (x>y)
        {
          x=x+y;
          y=x-y;
          x=x-y;
        }

    for (i=x;i<=y;i++)
    {
     sum=sum+i;
    }
printf("sum=%d",sum);
}

