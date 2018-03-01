#include <stdio.h>
void main()
{
	int n,sum=0,i;
	int avg;
	int a[n];
	printf("Enter the n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	 avg=sum/n;
	printf("%d",avg);
}
