#include <stdio.h>
void main()
{
	int a,b,k;
	scanf("%d %d",&a,&b);
	a=a^b;
	k=a^b;
	a=a^b;
	printf("%d %d",b,a);
}
