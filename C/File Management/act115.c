#include<stdio.h>
main()

{
    char str[25];
    FILE *fp;
    fp=fopen("f2.txt","r");
    if (fp==NULL)
    {
        printf("File cant be found");
        exit(1);
    }

    while(fgets(str,8,fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}
