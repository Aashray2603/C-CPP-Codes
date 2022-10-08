#include<stdio.h>
void prime(int);
main()
{
    int x;
    printf("enter x:");
    scanf("%d",&x);
    prime(x);
}

void prime(int n)
{
    int i,flug=0;
    for (i=2;i<n;i++)
    {
        if(n%i==0)

        {
            flug=1;
            break;
        }
    }
    if (flug==0)
        printf("prime no.");
    else
        printf("not a prime no.");

}

