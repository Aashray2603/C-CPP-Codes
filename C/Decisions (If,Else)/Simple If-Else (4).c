
#include<stdio.h>
main()
{
    int x;
    printf("x:");
    scanf("%d",&x);
    if (x>=35)
    printf("student is passed");
}

/* no output displayed for x<35. but there will be an error in case we write if (x>=35);  because it means terminating the if statement. In such a case "student is passed" will always be the output no matter how much marks are entered. */

