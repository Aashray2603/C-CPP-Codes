#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float rate;
};
struct book input();
main()
{
    struct book bl;
    bl=input();
    printf("\nBook id is %d",bl.bookid);
    printf("\nName is %s",bl.title);
    printf("\nRate is %f",bl.rate);
}
struct book input()
{
    struct book b;
    printf("Enter book id:");
    scanf("%d",&b.bookid);
    printf("Enter title:");
    fflush(stdin);
    gets(b.title);
    printf("Enter rate:");
    scanf("%f",&b.rate);
    return(b);
};
