/* find if no. is perfect i.e. sum of all factors(excluding no.)=no. itself */
#include<stdio.h>
main()
{
    int x,i,sum=0;
    printf("enter x:");
    scanf("%d",&x);
    for (i=1;i<x;i++)
    {
        if (x%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==x)
     {
         printf("%d is perfect no.",x);
     }
     else
     {
         printf("%d is not perfect no.",x);
     }
}
