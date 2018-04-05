#include<stdio.h>
void factor(int a)
{
int i;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("\nfactor is %d",i);
}
}
}
