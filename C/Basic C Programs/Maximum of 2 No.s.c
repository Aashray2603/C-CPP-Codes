/* print max value out of x and y*/
#include<stdio.h>
main()
{
    int x,y,max;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    max=(x>y)?x:y;
    printf("Max value is %d",max);
}



