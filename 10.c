#include<stdio.h>
int main()
{
long long n;
int count=0;
printf(" \n Enter the integer");
scanf("%lid",&n);
while(n!=0)
{
    n/=10;
    count++;
}
printf(" \n Number of integer :%d",count);
}

