#include<stdio.h>
main()
{
    int n,i,j,k,s;
    printf("rows=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for (j=i;j>=0;j--)
        {
            printf(" %d",j);
        }
        for (s=1;s<=i;s++)
        {
            printf(" %d",s);
        }
        printf("\n");
    }
}
