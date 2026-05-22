#include<stdio.h>
void main()
{
	int i,total=0;
	for(i=1;i<=100;i++)
	if(i%2==0)
	{
		total=total+i;
		printf("%d\n",total);
	}
}