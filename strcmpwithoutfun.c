#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str[100],str2[100];
	int len=0,i;
	printf("enter the str\n");
	gets(str);
	printf("enter the str2\n");
	gets(str2);
	for(i=0;str[i]!='\0'&&str2[i]!='\0';i++)
	{
		if(str[i]!=str2[i])
		{
			printf("string are not same");
			exit(1);
		}
    }
			printf("string are same");
	
	
}