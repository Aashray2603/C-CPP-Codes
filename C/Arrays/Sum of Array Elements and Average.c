#include<stdio.h>
main()
{
    int x[5],i,sum=0;

    for (i=0;i<5;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&x[i]);
    }
    for (i=0;i<5;i++)
    {
        sum=sum+x[i];
    }
    printf("Sum is %d",sum);
    printf("\nAverage is %.2f",(float)sum/5);
}
