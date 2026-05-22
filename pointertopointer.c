#include<stdio.h>
void main()
{
	int *p,**ptr;
	int a=40;
	p=&a;
	ptr=&p;
	printf("%d",**ptr);
}