#include<stdio.h>
#include<math.h>
main()
{
    int x,rem,sum=0,n,times=0;
    printf("enter x:");
    scanf("%d",&x);
    n=x;

    while (n!=0)
    {
        times=times+1;
        n=n/10;
    }

    while (n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,times);
        n=n/10;
    }
printf("sum=%d",sum);
 if (n==sum)
 	printf("\nArmstrong Number");
 else
      printf("\nNot an Armstrong no.");
}
