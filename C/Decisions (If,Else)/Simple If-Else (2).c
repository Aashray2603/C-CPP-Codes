#include<stdio.h>
#define P printf
#define S scanf
main()
{
  int m;
  P("enter marks:");
  S("%d",&m);

  if (m>=0 && m<=100)
  {
      printf("valid marks");
  }

  else
  {
       printf("invalid marks");
  }

}











