#include<stdio.h>
main()
{
    int x[5],y[5],z[5],i;

    for (i=0;i<5;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&x[i]);
    }
    printf("\n");
    for (i=0;i<5;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&y[i]);
    }
    for (i=0;i<5;i++)
    {
        z[i]=x[i]+y[i];
        printf("\nSum is %d",z[i]);
    }
}


