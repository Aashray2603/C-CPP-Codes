#include<stdio.h>
main()
{
    float km,m,cm,ft,in;
    printf("distance in km");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    printf("distance in m %f",m);
    printf("\ndistance in cm %f",cm);
}


