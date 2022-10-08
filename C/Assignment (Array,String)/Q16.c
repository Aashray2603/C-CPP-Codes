#include<stdio.h>
main()
{
    int a[10],*ptr[10],i;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        ptr[i]=&a[i];
        printf("value of a[%d]=%d\n",i,*ptr[i]);
    }
}
