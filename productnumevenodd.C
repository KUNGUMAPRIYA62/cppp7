#include<stdio.h>
void main()
{
int a,b,n;
printf("enter the number:");
scanf("%d%d",&a,&b);
n=a*b;
if(n%2==0)
{
n=n-2;
}
else
{
n=n-1;
}
printf("\n%d",n);
}
