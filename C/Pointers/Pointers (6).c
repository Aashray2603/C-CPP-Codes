#include<stdio.h>
struct bank
{
    int acno;
    char name[20];
    float bal;
};
main()
{
    struct bank* ptr;
    ptr=(struct bank*)malloc (sizeof (struct bank));
    if (ptr==NULL)
    {
        printf("Out of Memory");
    }
    else
    {
        printf("\n Enter bank details");
        scanf("%d,%s,%f",&ptr ->acno,ptr ->name, &ptr ->bal);
        printf("\n In display detail %d %s %f",&ptr ->acno,ptr ->name, &ptr ->bal);
    }

}
