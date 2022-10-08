#include <stdio.h>
main()
{
    int a[4],b[5],c[9],i,j,k=0,temp;

    printf("\nEnter the 1ST Array:\n");
    for(i=0;i<4;i++)
    {
       scanf("%d",&a[i]);
       c[k]=a[i];
       k++;
    }

    printf("\nEnter the 2ND Array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }

    printf("\n\nThe Merged Array is:\n\n");
    for(k=0;k<9;k++)
        printf("%d\t",c[k]);

    printf("\n\nMerged & Sorted Array is:\n\n");
    for (i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
            {
                if(c[i]>c[j])
                {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
    }
    for(k=0;k<9;k++)
        printf("%d\t",c[k]);

}
