#include<stdio.h>
main()
{
    int a[10]={0},i,j,n=0,rem;
    printf("Enter Number:");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        if (a[rem]==1)
            break;
        a[rem]=1;
        n=n/10;
    }

    if (n>0)
        printf("Yes");
    else
        printf("No");

}
