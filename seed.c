#include<stdio.h>
void main()
{
int a,b;
printf("\n Enter the number for which the seeds have to be found \t");
int num;
scanf("%d",&num);
a=num;
while(a>0)
{
b=a%10;
a=a/10;
num=num*b;
}
printf("\n the number is :%d",num);
}
