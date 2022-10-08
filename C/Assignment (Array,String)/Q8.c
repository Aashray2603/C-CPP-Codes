#include<stdio.h>
main()
{
    int x[10],i,e=0,sum=0,max=0;

    for (i=0;i<10;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&x[i]);
    }

    for (i=0;i<10;i++)
    {
        if (x[i]%2==0)
        {
            e++;
            sum=sum+x[i];
             if (x[i]>max)
                max=x[i];
             else
                continue;
        }
        else
            continue;
    }

    printf("\nNo. of Even elements is %d",e);
    printf("\nSum of Even elements is %d",sum);
    printf("\nMaximum Even Value is %d",max);

}




