#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int len=0,i;
	printf("enter the str\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}