#include <stdio.h>
 
int main(void) {
int n,i,j=0,b[100],a[100];
printf("\n enter the value of n:\t");
scanf("%d",&n);
printf("\n enter the array elements:\t");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
int t=a[i],c=0;
while(t)
{
int rem=t%2;
t=t/2;
c++;
}
b[j++]=c;
 
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else if(b[i]==b[j])
{
if(a[i]>a[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}	
}
}
}
printf("\n the elements are \t:");
for(i=0;i<n;i++)
printf("\t %d",a[i]);
return 0;
}
