/* find reverse of given no. */
#include<stdio.h>
main()
{
    int x,rem,rev=0;
    printf("enter x:");
    scanf("%d",&x);

        while (x>0)
        {
               rem=x%10;
               rev=(rev*10)+rem;
               x=x/10;
        }

    printf("reverse=%d",rev);

}
