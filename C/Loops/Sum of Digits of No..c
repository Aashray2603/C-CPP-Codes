/* find sum of digits of no. */
#include<stdio.h>
main()
{
    int x,rem,sum=0;
    printf("enter x:");
    scanf("%d",&x);
    while (x>0)
           {
               rem=x%10;
               sum=sum+rem;
               x=x/10;
           }
printf("sum=%d",sum);
}
