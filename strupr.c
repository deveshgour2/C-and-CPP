#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the str\n");
	gets(str);
	strupr(str);
	printf("%s",str);
}