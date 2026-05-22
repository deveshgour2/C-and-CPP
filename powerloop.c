#include<stdio.h>
void main()
{
	int pow=1,a,b,i;
	printf("enter the num");
	scanf("%d",&a);
	printf("enter the power");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	printf("%d",pow);
}