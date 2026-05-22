#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char str2[100];
	printf("enter the string\n");
	gets(str);
	strcpy(str2,str);
	printf("%s",str2);
}