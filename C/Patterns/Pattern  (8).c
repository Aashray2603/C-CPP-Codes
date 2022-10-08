#include<stdio.h>
main()
{
    int n,i,k,j;

    printf("enter row value:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf(" ");
        }

        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }

}
