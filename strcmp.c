#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char str2[100];
	printf("enter the str\n");
	gets(str);
	printf("enter the str2\n");
	gets(str2);
	if(strcmp(str,str2)==0)
	{
		printf("string are same");
	}
	else
	{
		printf("not same");
	}
}