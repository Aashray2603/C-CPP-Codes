#include<stdio.h>
main()
{
    int x[5],i,p=0,n=0,z=0;

    for (i=0;i<5;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&x[i]);
    }

    for (i=0;i<5;i++)
    {
        if (x[i]>0)
            p++;
        else if (x[i]<0)
            n++;
        else
            z++;
    }

    printf("\n");
    printf("No. of Positive Numbers is %d",p);
    printf("\nNo. of Negative Numbers is %d",n);
    printf("\nNo. of zero Numbers is %d",z);

}
