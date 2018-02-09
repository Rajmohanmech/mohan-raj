#include<stdio.h>
void main()
{
      int a[4],n,i;
    printf("Enter the value");
    scanf("\n%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
printf("\n%d\t%d",a[i],i);
}
}

