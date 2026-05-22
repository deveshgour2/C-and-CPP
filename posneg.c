#include<stdio.h>
int main()
{
	int num;
	printf("enter the value of num\n");
	scanf("%d",&num);
	char *result=(num>0)?"positive":(num<0)?"negative":"zero";
	printf("the number entered is %s\n",result);
	
	
    return 0;
}