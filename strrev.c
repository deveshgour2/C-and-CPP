#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string\n");
	gets(str);
	strrev(str);
	printf("%s",(str));
}