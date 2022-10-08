#include<stdio.h>
main()
{
    int a,b,c;
    printf("a,b,c are");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
       if (a>c)
       {
           printf("%d is max",a);
       }
       else
       {
           printf("%d is max",c);
       }
    }
    else
    {
        if (b>c)
        {
            printf("%d is max",b);
        }
        else
        {
            printf("%d is max",c);

        }
    }


}
