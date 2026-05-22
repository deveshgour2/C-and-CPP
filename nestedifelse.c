#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b,c\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
		else
		{
			if(b>c&&b>a)
			{
				printf("b is greater ");
			}
			else
			{
				printf(" c is greater");
			}
		}
	}
