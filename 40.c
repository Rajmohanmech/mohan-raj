#include<stdio.h>
void main()
{
 int a=-1,b=1,c,n,i;
 printf("enter the n value");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
 }
}
