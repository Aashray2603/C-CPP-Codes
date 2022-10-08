#include<stdio.h>
main()
{
int x,y,i;
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
    for (i=x;i<=y;i++)
    {
        if (i%5==0 && i%7==0)
        {
            printf("%d\t",i);
        }
    }
}
