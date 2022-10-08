#include<stdio.h>
#include<math.h>
main()
{
   int a,b,c;
   char op;
   printf("a=");
   scanf("%d",&a);
   printf("operator");
   fflush(stdin);
   scanf("%c",&op);
   printf("b=");
   scanf("%d",&b);

   if (op=='+')
    printf("c=%d",a+b);
   else if (op=='-')
    printf("c=%d",a-b);
   else if (op=='*')
    printf("c=%d",a*b);
   else if (op=='/')
    printf("c=%d",a/b);
   else
    printf("invalid operator");

}

