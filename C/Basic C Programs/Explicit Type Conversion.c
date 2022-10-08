#include<stdio.h>
main()
{
    int x=5,y=2;
    float ans;
    ans=(float)x/y;
    printf("ans=%f",ans);

}

/* ans=x/(float)y also gives same */

/* as both operands x and y are int, so ans=x/y gives 2.000000 and not 2.50000 even though ans is float.
