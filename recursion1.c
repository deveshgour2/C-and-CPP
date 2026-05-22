#include<stdio.h>
int show(int);

 void main()
 {
 	int num;
 	printf("enter the num\n");
 	scanf("%d",&num);
 	printf("%d",show(num));
 }
 
 int show(num)
 {
 	if(num==1)
 	{
 		return 1;
	 }
	else 
	{
		printf("%d\n",num);
	}
	return show(num-1);
 }