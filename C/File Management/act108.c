#include<stdio.h>
#include<string.h>
main()
{
    int i;
    FILE *fp;
    char str[120];
    fp=fopen("f1.txt","w");
    if (fp==NULL)
    {
        printf("File Cant Open");
        exit(1);
    }
    printf("Enter String:");
    gets(str);
    for (i=0;i<strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);
}
