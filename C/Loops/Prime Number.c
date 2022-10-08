#include<stdio.h>
main()
{
    int x,i,flag=0;
printf("Enter Number:");
scanf("%d",&x);

    for (i=2;i<x;i++)
    {
        if (x%i==0)
        {
            flag=1;
            break;
        }
    }
if (x==1 || x==0)
    {
       printf("Neither prime nor composite",x);
    }
else
    {
        if (flag==0)
        printf("%d is prime no.",x);

        else
        printf("%d is composite no.",x);
    }
}

/* rather than using else statement you can also use if (flag==1) */

