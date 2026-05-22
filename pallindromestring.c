#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[100];
	int len=0,i=0;
	printf("enter the str\n");
	gets(str);
	len=strlen(str);
	len=len-1;
	while(len>1)
	{
		if(str[i]!=str[len])
		{
			printf("string is not pallindrome");
			exit(1);
		}
		   len--;
		   i++;
	}
	       printf("string is pallindrome");		
    
}