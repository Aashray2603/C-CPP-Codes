#include<stdio.h>
main()
{
    int a[3][3],t[3][3],i,j;

     printf("Enter Matrix:\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
     printf("\n");
     printf("Transpose is:\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            t[i][j]=a[j][i];
            printf("%d ",t[i][j]);
        }
         printf("\n");
    }
}



