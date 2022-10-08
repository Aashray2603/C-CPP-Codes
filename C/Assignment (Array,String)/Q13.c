#include<stdio.h>
main()
{
    int a[5][5],b[5][5],c[5][5],i,j;

    printf("Enter Matrix 1:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    printf("Enter Matrix 2:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
          scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

    printf("Matrix C=A+B is:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}


