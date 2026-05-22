#include<stdio.h>
int main()
{
	float area,radius,pie;
	float pie=3.14;
	printf("enter the value of radius");
	scanf("%f\n",radius);
	area=pie*radius*radius;
	printf("area=%f",area);
	return 0;
}