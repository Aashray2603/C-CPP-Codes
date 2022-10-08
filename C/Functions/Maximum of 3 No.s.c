int max(int,int,int);
#include<stdio.h>
main()
{
    int a,b,c,res;
    printf("Enter valued of a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    res=max(a,b,c);
    printf("Max value is %d",res);
}

int max(int x,int y,int z)
{
    int w;
    w=(x>y)?((x>z)?x:z):((y>z)?y:z);
    return w;
}



