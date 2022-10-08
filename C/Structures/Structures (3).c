#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float rate;
};
struct book input();
void display(struct book);
main()
{
    struct book bl;
    bl=input();
    display(bl);

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
void display(struct book g)
{
    printf("\nBook id is %d",g.bookid);
    printf("\nName is %s",g.title);
    printf("\nRate is %f",g.rate);
}
