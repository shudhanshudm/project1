#include<stdio.h>
int insert();
int odd(int);
int prime(int);
void factor(int);
void main()
{
int o,p,n;
n=insert();
o=odd(n);
	if(o==1)
	{
	p=prime(n);
	if(p==1)
	{
	factor(n);
	}
}
}
