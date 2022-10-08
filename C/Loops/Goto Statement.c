#include<stdio.h>
#include<math.h>
main()
{
int x;
float ans;
read:
printf("\nEnter any no.:");
scanf("%d",&x);
if (x<0)
goto read;
ans=sqrt(x);
printf("square root of %d=%f",x,ans);
}

/* To terminate this code after 5 attempts, use the code:

int x,count=0;
float ans;
read:
printf("\nEnter any no.:");
scanf("%d",&x);
if (x<0)
goto read;
ans=sqrt(x);
printf("square root of %d=%f",x,ans);

count++;
if (count<=5)
    goto read; */

