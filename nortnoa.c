#include<stdio.h>
void fibbo();
void fact();
void prime();
   void main()
{
	 fibbo();
	 fact();
	 prime();
}
 
 void fact()
 {
 	int i,num;
 	int fact=1;
 	printf("enter the num\n");
 	scanf("%d",&num);
 	
 	for(i=1;i<=num;i++)
 	{
 		fact=fact*i;
	 }
	 {
	 	printf("fact=%d\n",fact);
	 }
 }
 
    void fibbo()
    {
    	int i,a,b,c;
    	a=0;
    	b=1;
    	for(i=1;i<=10;i++)
    	{
    		c=a+b;
    		printf("%d\n",c);
		    a=b;
		    b=c;
	    }
   }
   
   void prime()
   {
   	int i,prime,f=0,num;
   	printf("enter the num");
   	scanf("%d",&num);
   	
	   for(i=2;i<=num/2;i++)
   	{
   	  if(num%i==0)
		 {
		 	f=1;
		 	break;
	     }	
	 }
	        {
	        	if(f==1)
	        	{
	        		printf("no is not prime");
				}
				else
				{
					printf("no is prime");
				}
			}
    }
   