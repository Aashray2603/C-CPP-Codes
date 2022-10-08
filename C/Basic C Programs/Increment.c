#include<stdio.h>
main()
{
    int x,y,ans;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    ans=x + y++;
    printf("x=%d,y=%d,ans=%d",x,y,ans);
    ans=x-- - -y--;
    printf("\nx=%d,y=%d,ans=%d",x,y,ans);
    ans=--x + --y;
    printf("\nx=%d,y=%d,ans=%d");
}
