#include<stdio.h>
main()
{
    int x,i;

    for(i=1;;i++)
    {
        printf("Enter Password:");
        scanf("%d",&x);
        if(x==1234)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Incorrect\n");
            continue;
        }

    }
}
