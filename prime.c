#include<stdio.h>
int prime(int a)
{
int i,c=0;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{
printf("Number is prime\n");
return 1;
}
else
{
printf("Number is not prime\n");
return 0;
}
}
