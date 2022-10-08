void factor(int);
#include<stdio.h>
main()
{
    int a;
    printf("Enter valued of a:");
    scanf("%d",&a);
    factor(a);
}
 void factor(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d ",i);
        }
    }
}

