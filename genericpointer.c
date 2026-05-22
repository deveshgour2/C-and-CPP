#include<stdio.h>
void main()
{
	void *p;
	int a=52;
	char ch='h';
	float f=45.2;
	p=&a;
	printf("%d\n",*(int *)p);
	p=&ch;
	printf("%c\n",*(char *)p);
	p=&f;
	printf("%f\n",*(float *)p);
}