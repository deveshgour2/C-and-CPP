#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer:");
	scanf("%d",&num);
	char *Sresult=(num%2==0)?"even":"odd";
	printf("the number is %d is %s.\n",num,result);
	return 0;
}