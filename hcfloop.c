#include<stdio.h>
void main()
{
	int i,a,b,max,hcf;
	printf("enter two number");
	scanf("%d\n%d",&a,&b);
	max=(a>b)?a:b;
	for(i=1;i<=max;i++)
	
	if(a%i==0&&b%i==0)
	{
		hcf=i;
	}
	{
		printf("hcf = %d\n",hcf);
     }
 
}