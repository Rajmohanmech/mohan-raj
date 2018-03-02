#include<stdio.h>
void main()
{
    int n,i,temp;
    int a[n];
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        
    }
}
printf("\nlarge::%d",a[i]);
printf("\nsmall::%d",a[0]);
}
