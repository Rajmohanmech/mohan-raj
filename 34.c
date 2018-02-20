#include<stdio.h>
#include<string.h>
void main()
{
char a[200];
int b=1,i;
printf("Enter the string");
scanf("\n%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
b++;
}
printf("\nnumber of word is %d",b);
}
