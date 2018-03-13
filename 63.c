#include<stdio.h>
#include<string.h>
void main()
{
char A[200];
int B=0,i;
printf("Enter the string");
scanf("\n%[^\n]",A);
for(i=0;A[i]!='\0';i++)
{
if(A[i]==' ')
B++;
}
printf("\nnumber of word is %d",B+1);
}
