#include<stdio.h>
void main()
{
	int a[6];
	int len;
	len= sizeof (a)/sizeof (a[0]);
	printf("%d",len);
}