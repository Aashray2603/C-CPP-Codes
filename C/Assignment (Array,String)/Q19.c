#include<stdio.h>
main()
{
    int a[3][3],i,j,min;
    printf("Enter Matrix:\n");
    for (i=0;i<3;i++)
     {
        for (j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
     }
    min=a[0][0];

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
           if (a[i]<min)
            {
                min=a[i];
            }
            else
            {
            continue;
            }
        }
    }
    printf("Minimum value is %d",min);

}
