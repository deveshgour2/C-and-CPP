#include<stdio.h>
 int main()
{
	int num,sum=0,r,m;
	printf("enter the num");
	scanf("%d",&num);
	
	m=num;
	
	  while(num>0)
	  {
	  	r=num%10;
	  	sum+=r*r*r;
	  	num/=10;
	  }
	  if(m==sum)
	  {
	  	printf("no is armstrong");
	  }
	  else
	  {
	  	printf("no is not armstrong");
	  }
	
}