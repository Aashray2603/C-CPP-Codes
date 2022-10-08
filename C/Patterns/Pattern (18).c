#include<stdio.h>
main()
{
    int n,i,k,j;
    printf("no. of rows=");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (k=1;k<i;k++)
        {
            printf(" ");
        }
        for (j=i;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
