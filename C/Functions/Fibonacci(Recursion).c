#include<stdio.h>
int Fibonacci(int);
main()
{
    int n,i;
    printf("Enter No. of Fibonacci series terms:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
        printf("%d\t",Fibonacci (i));
}
int Fibonacci(int x)
{
    if (x<=1)
        return x;
   else
        return (Fibonacci(x-1) + Fibonacci (x-2));
}
