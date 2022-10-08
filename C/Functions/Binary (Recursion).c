#include<stdio.h>
int Binary(int);
main()
{
    int n,m;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("Binary is:");
    m=Binary(n);
}

int Binary(int x)
{
    int y;
    y=x%2;
    x=x/2;

    if (x==0)
    printf("%d",y);

    else
    {
        Binary(x);
        printf("%d",y);
    }
}
