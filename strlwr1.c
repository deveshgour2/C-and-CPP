#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the str\n");
	gets(str);
	strlwr(str);
	printf("%s",str);
}