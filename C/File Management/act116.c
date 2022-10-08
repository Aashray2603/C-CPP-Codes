#include<stdio.h>
struct book
{
    int bookid;
    char name[25];
    float rate;
};
main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("f6.dat","wb");
    printf("Enter bookid,name,rate:");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.name);
    scanf("%f",&b1.rate);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);

}
