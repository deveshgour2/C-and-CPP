#include<stdio.h>
void main()
{
	int i,num;
	
	printf("enter the num");
	scanf("%d",&num);
	
    i=1;
    while(i<=10)
    {
    	printf("%d\n",num*i);
    	i++;
	}
}