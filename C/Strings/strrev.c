#include<stdio.h>
main()
{
    char str[10];
    int i;
    printf("Enter String:");
    gets(str);
    printf("\nReverse of string is %s",strrev(str));
}

/* To check whether palindrome or not just use the if condition
    if (strrev(str)==str)
     printf("Palindrome");
    else
     printf("Not a Palindrome");
*/
