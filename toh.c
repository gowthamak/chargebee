#include<stdio.h>

int toh(int nn,char sr,char t,char dt)
{
if(nn==1)
{
printf("\nthe %ddisk moved from %c-->%c",nn,sr,dt);
return 0;
}
toh(nn-1,sr,dt,t);
printf("\nthe %ddisk moved from %c-->%c",nn,sr,dt);
toh(nn-1,t,sr,dt);
}
int main()

{
int n;
char source='a',temp='b',dest='c';
printf("enter no of disk:");
scanf("%d",&n);
toh(n,source,temp,dest);
return 0;
}

