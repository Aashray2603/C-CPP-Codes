#include<stdio.h>
#define P printf
#define S scanf
main()
{
  char x;
  P("enter any character:");
  S("%c",&x);

  if (x=='r' || x=='R')
  {
      printf("start reading");
  }

  else
  {
      printf("start playing");
  }

}







