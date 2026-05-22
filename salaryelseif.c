#include<stdio.h>
void main()
{
	int salary,hra,da;
	printf("enter the salary");
	scanf("%d",&salary);
	if (salary>=50000)
	{
		printf("hra=30%\n da=30%");
	}
	else if(salary>=30000) 
	{
		printf("hra=20%\nda=20%");
	}
	else if (salary>=10000)
	{
		printf("hra=10%\nda=%10");
	}
	else 
	{
		printf("no hra\nno da");
	}
	
}