#include<stdio.h>
main()
{
    int i,j,row;
    printf("Row value=");
    scanf("%d",&row);
    for (i=row;i>=1;i--)

    {
        for (j=i;j>=1;j--)

        {
            printf("%d",j);
        }
        printf("\t\n");
    }

}
