#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int len=0,i;
	printf("enter the str\n");
	gets(str);
	for(i=0;str[i]!= '\0';i++)
	{
		len++;
	}
	printf("%d",len);	
}