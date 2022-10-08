#include<stdio.h>
struct bank
{
    int acno;
    float bal;
    char name[30];
};
main()
{
    struct bank bl;
    printf("Enter account no.:");
    scanf("%d",&bl.acno);
    printf("Enter balance:");
    scanf("%f",&bl.bal);
    printf("Enter name:");
    fflush(stdin);
    gets(bl.name);
    printf("\n acno=%d \n bal=%f \n name=%s",bl.acno,bl.bal,bl.name);
}


