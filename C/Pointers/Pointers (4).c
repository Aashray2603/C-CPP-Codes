#include<stdio.h>

    int square (int x)
        {
            return (x*x);
        }
    int cube (int x)
        {
            return (x*x*x);
        }
   int calculate (int(*p)(int),int n)
        {
           return(p(n));
        }


main()
{
    int ch,n,ans;
    printf("press 1 for square");
    printf("\npress 2 for cube");
    printf("\n\nenter your choice:");
    scanf("%d",&ch);
    printf("enter no.:");
    scanf("%d",&n);

    switch(ch)
    {
    case 1:
        {
            ans=calculate(square,n);
            printf("square=%d",ans);
        }
        break;
    case 2:
        {
            ans=calculate(cube,n);
            printf("cube=%d",ans);
        }
        break;
    }
}

