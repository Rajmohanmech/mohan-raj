#include <stdio.h>
#include<string.h>
void main()
{
	char a[10];
	int n;
	scanf("%s",a);
	m=strlen(a);
	if(n%2==0)
	{
		a[n/2]='*';
		a[(n/2)-1]='*';
	}
	else
	{
		a[n/2]='*';
	}
	printf("%s",a);
}
