#include<stdio.h>
#include<string.h>
void main()
{
	char str[100]={"my name"};
	char str2[100]={"is devesh"};
	printf("enter the str\n");
	gets(str);
	printf("enter the str2\n");
	gets(str2);
	strncat(str, str2, 8);
	printf("%s",str);
}