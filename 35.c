#include <stdio.h>
#include<string.h>
void main() 
{
	char a[200];
	int i,b=0;
	printf("Enter the string");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' &&  a[i]<='9')
		b++;
	}
	printf("\n%d",b);
}
