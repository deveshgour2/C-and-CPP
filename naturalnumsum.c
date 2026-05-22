#include<stdio.h>
void main()
{
	int i,sum=0,num;
	printf("enter the num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		printf("sum=%d\n",sum);//for all output
	}
	{
		//printf("sum=%d\n",sum);// for one output
	}
}