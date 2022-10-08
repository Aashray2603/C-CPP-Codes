#include<stdio.h>
main()
{
    int n,i,k,j;

    printf("enter row value:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (k=1;k<i;k++)
        {
            printf(" ");
        }

        for (j=i;j<=n;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }

}
