#include<stdio.h>
#define m 5    /* m denotes no. of names you will enter */
#define n 10   /* n denotes the size of each name */

main()
{
    char name[m][n],t[n];  /* name is a 2d character array in which maximum m names can be entered and each name can have maximum n characters
                                also t is a variable which can have max. n characters. t will be used while sorting. */
    int i,j;

    printf("Enter the Names in Random Order:\n");
    for(i=0;i<m;i++)
        gets(name[i]);

    printf("\nNames as per Dictionary are:\n");
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(name[i],name[j])>0)
             {
                strcpy(t,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],t);
             }
        }
    }

     for(i=0;i<m;i++)
        puts(name[i]);


}
