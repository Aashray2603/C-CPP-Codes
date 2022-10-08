#include<stdio.h>
main()
{
    int n,i,j;
    char ch;
    ch='A'-1;
    printf("rows=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for (j=1;j<=i;j++)
        {
            printf("%c",ch+j);
        }

        printf("\n");
    }
}
