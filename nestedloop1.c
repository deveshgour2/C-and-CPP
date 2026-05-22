#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		  for(j=i*2;j>2;j--)
		{
			printf(" ");
		}
		  for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}