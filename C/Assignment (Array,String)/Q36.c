#include<stdio.h>
main()
{
    int x[10],i;

    for (i=0;i<10;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&x[i]);
    }

    printf("\n\n");
    printf("Even No.s are:\n");
    for (i=0;i<10;i++)
    {
        if (x[i]%2==0)
         printf("%d\t",x[i]);
    }

    printf("\n\n");
    printf("Odd No.s are:\n");
    for (i=0;i<10;i++)
    {
        if (x[i]%2!=0)
         printf("%d\t",x[i]);
    }
}




