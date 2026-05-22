#include<stdio.h>
void square();

    void main()
    {
    	square();
	}
	
	void square()
	{
		int num,square;
		
		printf("enter the num");
		scanf("%d",&num);
		square=num*num;
		printf("square=%d",square);
	}