#include<stdio.h>
main()
{
    int i,j,row;
    printf("Row value=");
    scanf("%d",&row);
    for (i=1;i<=row;i++)

    {
        for (j=i;j<=row;j++)

        {
            printf("%d",j);
        }
        printf("\t\n");
    }

}
