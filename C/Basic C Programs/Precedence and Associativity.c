#include<stdio.h>
main()
{
    int x=1,y=1,z=1;
    printf("%d",x+=y+=z);
    printf("\n%d",x<y?y:x);
    printf("\n%d",x<y?x++:y++);
    printf("\n%d %d",x,y);
    printf("\n%d",z+=x<y?x++:y++);
    printf("\n%d %d %d",x,y,z);
    printf("\n%d",z>=y>=x?1:0);
    printf("\n%d",z>=y && y>=x);

}
