#include<stdio.h>
int show(int);

 void main()
 {
 	int num;
 	printf("enter the num\n");
 	scanf("%d",&num);
 	printf("%d\n",show(num));
 }
 
 int show(num)
 {
 	if(num==10)
 	{
 		return 10;
	 }
	 else
	 {
	 	printf("%d",num);
	 }
	 return show(num+1);
 }