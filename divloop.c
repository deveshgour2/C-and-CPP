#include<stdio.h>
void main()
{
	int i,num;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	if(i%5==0&&i%7==0)
	printf("%d\n",i);
}