/* find n factorial */
#include<stdio.h>
main()
{
int i,n,factorial=1;
printf("Enter n:");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
    factorial=factorial*i;
}
printf("product=%d",factorial);
}

