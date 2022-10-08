#include<stdio.h>
main()
{
    int a[10],i,j;
    for (i=0;i<10;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
         {
          if(a[i]==a[j])
            {
                printf("%d\n",a[i]);
            }
         }
    }
}
