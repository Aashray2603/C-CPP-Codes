#include<stdio.h>
main()
{
    int x[5],i,max;

    for (i=0;i<5;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&x[i]);
    }
    max=x[0];

    for (i=0;i<5;i++)
    {
        if (x[i]>max)
        {
            max=x[i];
        }
        else
        {
            continue;
        }
    }
    printf("Maximum value is %d",max);
}
