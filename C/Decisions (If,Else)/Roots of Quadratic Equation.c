#include<stdio.h>
#include<math.h>
main()
{
   int a,b,c,D;
   float x,y,ima;
   printf("a=");
   scanf("%d",&a);
   printf("b=");
   scanf("%d",&b);
   printf("c=");
   scanf("%d",&c);
   D=(b*b)-(4*a*c);
   printf("Discriminant is %d\n",D);

   if (D>0)
   {
       x=(-b-sqrt(D))/(2*a);
       y=(-b+sqrt(D))/(2*a);

       printf("x=%f and y=%f",x,y);
   }
   else if (D==0)
   {
       x=-b/(2*a);
       printf("x=y=%f",x);
   }
   else
   {
    ima=sqrt(-D)/2*a;
    printf("x and y are imaginary roots=i%f",ima);
   }
}
