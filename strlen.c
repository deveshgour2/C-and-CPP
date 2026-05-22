#include<stdio.h>
#include<string.h>
void main()
{
	char str[30];
	int len;
	printf("enter the string\n");
	gets(str);
	len= strlen(str);
	printf("%d",len);
}