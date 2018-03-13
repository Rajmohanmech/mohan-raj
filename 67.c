#include<stdio.h>
void main()
{
int a;
scanf("%d",&a);
while(a!=0)
{
if(a%10==0)
{
printf("\n%d",a);
break;
}
a++;
}
}
