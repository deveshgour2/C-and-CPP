#include<stdio.h>
void main()
{
	char str[100];
	printf("enter the string\n");
	scanf("%[^\n]s",str);
	printf("%s",str);
}