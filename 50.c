#include <stdio.h>
void main()
{
	int a;
	int i=2;
	printf("Enter the a value");
	scanf("%d",&a);
	while(i<=a)
	{
		if(i==a)
		{
			printf("yes");
		}
		else
		{
		    printf("\nNo");
		}
		i=i*2;
	}
}
