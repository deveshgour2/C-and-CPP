#include<stdio.h>
void main()
{
	int i,num;
	printf("enter the num");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i*num);
	}
}