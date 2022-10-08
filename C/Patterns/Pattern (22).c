#include<stdio.h>
main()
{
    int n,i,j,k;
    char ch;
    ch='A'-1;
    printf("rows=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            for (k=1;k<=n-i;k++)
            {
               printf(" ");
            }
            for (j=1;j<=i;j++)
            {
                printf(" %d",j);
            }
        }
        else
        {
            for (k=1;k<=n-i;k++)
            {
                printf(" ");
            }
            for (j=1;j<=i;j++)
            {
                printf(" %c",ch+j);
            }
        }
        printf("\n");
    }
}
