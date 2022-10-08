#include<stdio.h>
main()
{
    int n,i,j;
    printf("enter row value:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        for (j=5;j>=i;j--)
        {
          printf("%d",j);
        }
    printf("\t\n");
    }
}
