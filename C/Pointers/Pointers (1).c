#include<stdio.h>
main()
{
int x=5;
int *j;
j=&x;
printf("\n%d \n%d \n%d",x,j,&x);
printf("\n%d \n%d \n%d",*j,*&x,&j);
}
