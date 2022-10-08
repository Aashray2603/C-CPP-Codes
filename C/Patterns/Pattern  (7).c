#include<stdio.h>
main()
{
    int n,i,j;
    printf("enter row value:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
        {
          printf("%d",j);
        }
    printf("\t\n");
    }
}
