#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    printf("Enter the string");
    scanf("%s,a);
    strcpy(b,a):
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\n Not palindrome");
    }
    }
