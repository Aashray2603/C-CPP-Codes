#include<stdio.h>
main()
{
    int x[5],i,j,a;
    for (i=0;i<5;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&x[i]);
    }
    for (i=0;i<5;i++)
    {
        for (j=i+1;j<5;j++)
        {
            if (x[i]>x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;

            }
        }
    }
    printf("Numbers in Ascending Order are:\n");
    for (i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
    }
}

/* for descending just write x[i]<x[j] */
