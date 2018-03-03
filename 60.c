#include <stdio.h>
void main()
{
	int n,i, A=1,B=1,C;
	scanf("%d",&n);
	printf("%d \n%d",A,B);
	for(i=1;i<n-1;i++)
	{
		C=A+B;
		printf("\n%d",C);
		A=B;
		B=C;
}
}
