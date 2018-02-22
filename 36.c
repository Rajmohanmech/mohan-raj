#include<stdio.h>
#include<string.h>
void main()
{
char a[20];
int length,i,sum=0;
printf("Enter the string");
scanf("%s",a);
length=strlen(a);
for(i=0;i<1;i++)
{
if(a[i]=='#'||a[i]=='@'||a[i]=='$'||a[i]=='*'||a[i]=='%')
{
sum=sum+1;
}
}
printf("No. of special characters:\n%d",sum);
}
