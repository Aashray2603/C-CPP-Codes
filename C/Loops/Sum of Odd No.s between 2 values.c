/* print sum of even no.s */
#include<stdio.h>
main()
{
int x,y,i,sum=0;
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
for (i=x;i<=y;i++)
{
    if (i%2!=0)
    {
    sum=sum+i;
    }
}
printf("sum=%d",sum);

}
