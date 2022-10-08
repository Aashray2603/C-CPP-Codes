#include<stdio.h>
main()
{
int x,y,e=0,i,sum=0;
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
for (i=x;i<=y;i++)
{
    if (i%2==0)
    {
        e++;
        sum=sum+i;
        printf("%d\t",i);
    }
}
printf("\nNo. of even values=%d",e);
printf("\nsum of even values=%d",sum);
}

