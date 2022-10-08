#include<stdio.h>
main()
{
int x,n;
float rate,dis,amount,discount,bill;
printf("enter x:");
scanf("%d",&x);
if (x==1)
{
    printf("Vanilla Flavour");
    rate=20.00;
    dis=0.15;
}
else if (x==2)
{
    printf("Rajbhog Flavour");
    rate=30.00;
    dis=0.175;
}
else if (x==3)
{
    printf("Kaju Draksh");
    rate=40.00;
    dis=0.2;
}
else if (x==4)
{
    printf("Chocolate Flavour");
    rate=50.00;
    dis=0.225;
}
else
{
    printf("Flavour Unavailable");
}

printf("\nRate of 1 cup=%f",rate);
printf("\nNo. of cups:");
scanf("%d",&n);
amount=rate*n;
printf("\nNet amount is %f:",amount);
discount=amount*dis;
printf("\nNet discount is %f:",discount);
bill=amount-discount;
printf("\nTotal Bill is %f:",bill);
}
