#include<stdio.h>
main()
{
    int a=0,b=1,f,sum=0,i;
    printf("Enter number of terms in Fibonacci Series:");
    scanf("%d",&f);

    printf("\n");
    printf("%d\t%d\t",a,b);

    for (i=2;i<=f;i++)
   {
    sum=a+b;
    printf("%d\t",sum);
    a=b;
    b=sum;
   }
}
