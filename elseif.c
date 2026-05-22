#include<stdio.h>
int main()
{
	int profit,loss,equal,price;
	printf("enter the price");
	scanf("%d",&price);
	if (price<1000) 
	{
		printf("loss");
	}
	else if (price>1000) 
	{
		printf("profit");
	}
	else
	{printf("equal");
	}
	return 0;
}