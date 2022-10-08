/* find sum of 1st and last digit of no. */
#include<stdio.h>
main()
{
    int x,rem,sum=0;
    printf("enter x:");
    scanf("%d",&x);
    rem=x%10;

        while (x>9)
        {
          x=x/10;
        }

    sum=rem+x;
    printf("sum of first and last digits=%d",sum);
}
