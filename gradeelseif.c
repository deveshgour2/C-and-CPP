#include<stdio.h>
void main()
{
	float marks,average,grade,total,hindi,english,physics,chemistry,maths;
	printf("enter the marks of hini&english & physics & chemistry & maths");
	scanf("%f\n%f\n%f\n%f\n%f",&hindi,&english,&physics,&chemistry,&maths);
	average=(hindi+english+physics+chemistry+maths)/5;
	printf("%f\n",average);
	
	if (average>=75)
	{
		printf("grade A");
	}
	else if (average>=60)
	{
		printf("grade B");
	}
	else if(average>=45)
	{
		printf("grade C");
	}
	else if (average>=33)
	{
		printf("grade D");
	}
	else
	printf("fail");
}