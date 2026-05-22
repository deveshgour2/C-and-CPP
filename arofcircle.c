#include<stdio.h>
int main()
{
	float pie,area,radius;
	printf("enter the radius");
	scanf("%f",&radius);
    pie=3.14;
	area=(pie*radius*radius);
	printf("area=%.2f\n",area);
	return 0;
}