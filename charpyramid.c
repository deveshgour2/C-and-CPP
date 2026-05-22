#include<stdio.h>
void main()
{
	int i,rows,j;
	char ch='a';
	rows=7;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		{
		
			printf("\n");
		}
	}
}