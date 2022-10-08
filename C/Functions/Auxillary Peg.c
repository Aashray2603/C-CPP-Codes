#include<stdio.h>
int move(int,char,char,char);
main()
{
    int n=4;;
    char A,B,C;
    move(n,'A','B','C');
}
int move(int n,char A,char B,char C)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        move (n-1,'A','C','B');
        printf("Moving from %c to %c\n",A,C);
        move (n-1,'C','A','B');
    }
}
