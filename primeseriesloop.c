#include<stdio.h>
void main() 
{
	int i,f,a,b,prime;
	//printf("enter the num");
	//scanf("%d",&a);

	for(i=2; i<=100; i++)
	{	
	  {
		prime=1;
      }

    for(a=2;a<i;a++)
    {
    	if(i%a==0)
    	{
    	 prime=0;
    	 break;
		}
	}
    if (prime)
    {
    	printf("%d\n",i);
	}
}
}