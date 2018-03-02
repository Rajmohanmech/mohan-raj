#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,n;
    printf("enter the string");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        printf("\t%c",a[i]);
    }
    
}
