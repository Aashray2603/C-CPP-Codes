#include<stdio.h>
main()
{
    int n,i,k,j;
    printf("no. of rows=");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       if (i==1 || i==n)
       {
           for (j=1;j<=n;j++)
           {
               printf(" *");
           }
       }
        else
        {
            printf(" *");
            for (k=1;k<=2*n-3;k++)
            {
                printf(" ");
            }
            printf("*");
        }
            printf("\n");


    }
}



