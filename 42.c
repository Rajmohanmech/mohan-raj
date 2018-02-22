#include<stdio.h>
#include<string.h>
void main()
{
 char a[30],b[30];
int c,d;
printf("Enter the string");
scanf("%s",a);
c=strlen(a);
printf("\n Enter the string");
scanf("\n%s",b);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else
{
    if(c<d)
    {
    printf("%S",b);
}
}
}
