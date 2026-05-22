#include<stdio.h>
void main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("year is leap");
	}
	else if (year%400==0)
	{
		printf("year is leap");
	}
	else
	{
		printf("not leap");
	}
	
}