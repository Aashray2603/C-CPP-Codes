/* print no. of 10,5,2,1 Rs. notes */
#include<stdio.h>
main()
{
    int a,ten,five,two,one;
    printf("Total amount:");
    scanf("%d",&a);
    ten=a/10;
    five=(a%10)/5;
    two=((a%10)%5)/2;
    one=(((a%10)%5)%2);
    printf("No. of 10,5,2 and 1 Rs. notes is %d %d %d %d",ten,five,two,one);
}

