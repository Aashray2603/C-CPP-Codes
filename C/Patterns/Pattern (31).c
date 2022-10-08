#include<stdio.h>
main()
{
    int n,i,k,j,s;
    printf("no. of rows=");
    scanf("%d",&n);
    printf("no. of columns=");
    scanf("%d",&s);

    for (i=1;i<=n;i++)
    {
       if (i==1 || i==n)
       {
           for (j=1;j<=s;j++)
           {
               printf(" *");
           }
       }
        else
        {
            printf(" *");
            for (k=1;k<=s-2;k++)
            {
                printf("  ");
            }
            printf(" *");
        }
            printf("\n");


    }
}


