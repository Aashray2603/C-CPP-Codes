#include<stdio.h>
main()
{
    int a[5],b[5],i;
    for (i=0;i<5;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("Copying in another Array:\n");

     for (i=0;i<5;i++)
     {
         b[i]=a[i];
         printf("%d\n",a[i]);
     }


}
