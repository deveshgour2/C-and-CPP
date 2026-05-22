#include<stdio.h>
void main()
{
	int f,i,num;
	printf("enter two num");
	scanf("%d", &num);
	for(i=2;i<=num/2;i++)
	  if(num%i==0)
	  {
	  	f=1;
	  	break;
	  }
	   
	    if (f==1)
	  	printf("not prime ");
	  	
	  
     else
     {
     	printf(" prime");
	 }
}