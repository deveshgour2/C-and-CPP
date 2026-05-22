#include<stdio.h>
void main()
{
	int i,a,b,lcm,min;
	printf("enter two num");
	scanf("%d %d",&a,&b);
	//lcm=(a<b)?a:b;
	for(i=1;i<=a*b;i++)
	
		if(i%a==0 && i%b==0)
	{
		lcm=i;
		break;
	}
	{
		printf("lcm=%d",lcm);
	}
}