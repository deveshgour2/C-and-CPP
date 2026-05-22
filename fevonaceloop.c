#include<stdio.h>
void main()
{
	int i,febonace=0,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		febonace(n)=febonace*(n-1)+i;
		printf("febonace=%d\n",febonace);
	}
}