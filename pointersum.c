#include<stdio.h>
void main() 
{
	int *p,*q,*s;
	int a=10,b=30;
	p = &a;
	q = &b;
	*s= (*p) + (*q);
	printf("%d",*s);
}