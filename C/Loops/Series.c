#include<stdio.h>
main()
{
    int n,i,f=1,s1=0,s2=0;
    printf("No. of Terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            f=f*i;
            s1=s1+f;
        }
        else
        {
            f=f*i;
            s2=s2+f;
        }
    }
    printf("Result is %d",s1-s2);
}






















