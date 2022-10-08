#include<stdio.h>
main()
{
    int x[5],i,e=0,o=0,s1=0,s2=0;

    for (i=0;i<5;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&x[i]);
    }

    for (i=0;i<5;i++)
    {
        if (x[i]%2==0)
        {
            e++;
            s1=s1+x[i];
        }
        else
        {
            o++;
            s2=s2+x[i];
        }
    }
    printf("\nNo. of Even elements is %d",e);
    printf("\nNo. of Odd elements is %d\n",o);
    printf("\nSum of Even elements is %d",s1);
    printf("\nSum of Odd elements is %d",s2);
}
