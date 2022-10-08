#include<stdio.h>
main()
{
    int i;
    FILE *fp;
    char str[120];
    fp=fopen("Aashray.txt","w");
    if(fp==NULL)
    {
        printf("File Cannot be Opened");
        exit(1);
    }
    printf("\nEnter String");
    gets(str);
    for (i=0;i<strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);
}
