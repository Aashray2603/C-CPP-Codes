#include<stdio.h>
main()
{
    int n,i,j,k=0;
    printf("enter rows:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            k=k+1;
            printf(" %d",k);

        }
        printf("\n");
    }
}
