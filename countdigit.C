#include<stdio.h>
void main()
{
int num;
int count=0;
printf("Enter any number:");
scanf("%d",&num);
while(num!=0)
{
count++;
num/=10;
}
printf("Total digits:%d",count);
}
