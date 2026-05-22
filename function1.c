#include<stdio.h>
int sumofseries();
 
  void main()
  {
  	sumofseries();
  }
  
  int sumofseries()
  {
  	int num,sumofseries,i,j;
  	printf("enter the num");
  	scanf("%d",&num);
  	
  	for(i=1;i<=num;i++)
  	{
	  for(j=num;j>=i;j--)
  	
  	{
  		printf("%d ",j);
	  }
  }
}