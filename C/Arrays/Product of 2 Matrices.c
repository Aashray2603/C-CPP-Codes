#include<stdio.h>
main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;

     printf("Enter Matrix A:\n");
     for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
     }
     printf("\n");

     printf("Enter Matrix B:\n");
     for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);
        }
     }

     for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
            {
                c[i][j]=0;
                for (k=0;k<3;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
     }

     printf("\nMatrix C=A*B is:\n");
     for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
}
