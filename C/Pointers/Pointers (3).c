#include<stdio.h>
main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("address of p=%d and address of p+1=%d",p,p+1);
    printf("\naddress of p=%d and address of p+3=%d",p,p+3);
    printf("\naddress of p=%d and address of p-2=%d",p,p-2);
    printf("\naddress of p=%d and address of p-q=%d",p,q,p-q);

}
