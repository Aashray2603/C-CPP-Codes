#include<stdio.h>
main()
{
    int n,i,k,j;
    printf("enter row value:");
    scanf("%d",&n);

    for (i=n;i>=1;i--)
    {
        for (k=1;k<i;k++)
        {
            printf(" ");
        }
        for (j=n;j>=i;j--)
        {
            printf("%d",j);
        }
       printf("\n");
    }
}
