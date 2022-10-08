#include<stdio.h>
main()
{
    int i,j,k,row;
    printf("Row value=");
    scanf("%d",&row);
    for (i=1;i<=row;i++)

    {
        for (k=1;k<=row-i;k++)

        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
