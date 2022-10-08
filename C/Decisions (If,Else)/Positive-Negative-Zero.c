#include<stdio.h>
main()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    if (a>=0)
    {
        if (a>0)

            printf("%d is positive",a);

        else

            printf("%d is zero",a);

    }
    else

        printf("%d is negative",a);

}

/* In case there is a single statement under the if or else command, no need to make curly braces.

  if(___)

  {
      if (___)
      {
      printf()
      }
      else (___)
      {
      printf()
      }
  }

  is same as

  if(___)

  {
      if (___)
      printf()
      else (__)
      printf()

  }

