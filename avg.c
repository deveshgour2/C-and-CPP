#include<stdio.h>
int main()
{
	float a,b,c,avg;
	printf("enter the value of a&b&c");
	scanf("%f\n %f\n %f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("avg=%f",avg);
	return 0;
}